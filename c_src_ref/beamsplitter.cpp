#include <cstdio>
#include "beamsplitter.h"

#if defined(_MSC_VER)

#define FORCE_INLINE	__forceinline

// Other compilers

#else	// defined(_MSC_VER)

#define	FORCE_INLINE inline __attribute__((always_inline))

#endif // !defined(_MSC_VER)

  //---------
  // mix function : mix 128 bits of state to 128 bits of state 

    FORCE_INLINE void mix ( uint64_t * s64, uint8_t * s8, 
              uint64_t * r64, uint8_t * r8, 
               const u8 box1[8][256], const u8 box2[8][256] )
    {
      uint8_t x[16] = {0};
      uint64_t * t = (uint64_t *)x;
      uint8_t * q = (uint8_t *)x;

      int counter = 0;

      for( int i = 0; i < 8; i++ ) {
        q[i] = s8[i] + counter; 
        q[i] = box1[i][q[i]];
        counter += box2[i][q[i]];
      }

      for( int i = 8; i < 16; i++ ) {
        q[i] = r8[i-8] + q[i-8] + counter; 
        q[i] = box2[(i-8)][q[i]];
        counter += box1[(i-8)][q[i]];
      }

      s64[0] = t[0];
      r64[0] = t[1];

      //printf("t   = %#018" PRIx64 "  %#018" PRIx64 "\n\n", t[0], t[1]);
      //printf("r,s = %#018" PRIx64 "  %#018" PRIx64 "\n\n", r64[0], s64[0]);
    }

  //---------
  // Hash round function 

    FORCE_INLINE void round( const uint64_t * m64, const uint8_t * m8, int len, 
            uint64_t * state64, uint8_t * state8 )
    {
      int index = 0;

      uint64_t * A = state64+0;
      uint64_t * B = state64+1;
      uint64_t * C = state64+2;
      uint64_t * D = state64+3;

      uint8_t * w = state8+0;
      uint8_t * x = state8+8;
      uint8_t * y = state8+16;
      uint8_t * z = state8+24;

      for( int Len = len >> 3; index < Len; index++ ) {
        state64[index&3] += (m64[index] + index);
        if ( index & 3 == 0 && index > 0 ) {
          mix( A, w, B, x, S[0], S[1]);
          mix( C, y, D, z, S[2], S[3]);
          mix( B, x, C, y, S[3], S[0]);
        }
      }

      for( index <<= 3; index < len; index++ ) {
        state8[index&31] += (m8[index] + index);
      }

      mix( A, w, B, x, S[0], S[1]);
      mix( C, y, D, z, S[2], S[3]);
      mix( B, x, C, y, S[3], S[0]);
    }

  //---------
  // main hash function 

    void beamsplitter_64 ( const void * key, int len, uint32_t seed, void * out )
    {
      const uint8_t *key8Arr = (uint8_t *)key;
      const uint64_t *key64Arr = (uint64_t *)key;

      const uint8_t seedbuf[8] = {0};
      uint32_t *seed32Arr = (uint32_t *)seedbuf;
      uint64_t *seed64Arr = (uint64_t *)seedbuf;
      const uint8_t *seed8Arr = (uint8_t *)seedbuf;

      const uint8_t buf[32] = {0};
      uint8_t *state8 = (uint8_t *)buf;
      uint32_t *state32 = (uint32_t *)buf;
      uint64_t *state = (uint64_t *)buf;

      seed32Arr[0] = seed;
      seed32Arr[1] = seed;

      round( seed64Arr, seed8Arr, 8, state, state8 );
      round( key64Arr, key8Arr, len, state, state8 );

      const uint8_t output[16] = {0};
      uint64_t *h = (uint64_t *)output;

      // The new combination step
      h[0] = state[0];
      h[0] ^=state[1];
      h[1] = state[2];
      h[1] ^=state[3];
      h[0] ^= h[1];

      //printf("s[0..3] = %#018" PRIx64 "  %#018" PRIx64 "  %#018" PRIx64 "  %#018" PRIx64 "\n", 
      //  state[0], state[1], state[2], state[3]); 
      //printf("h = %#018" PRIx64 "  %#018" PRIx64 "\n\n", h[0], h[1]);

      ((uint64_t *)out)[0] = h[0];
    }
