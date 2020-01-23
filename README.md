# :stars: [beamsplitter](https://github.com/dosyago/beamsplitter) ![npm downloads](https://img.shields.io/npm/dt/beamsplitter) ![version](https://img.shields.io/npm/v/beamsplitter)

A very simple S-box only hash.

**Please consider this primitive insecure as it does not pass SMHasher**

# Get

```console
npm i beamsplitter
```

## accolades

Passes Dieharder.

## work in progress

1. c code for smhasher
2. browser compatible build

## Test vectors

```text
0000000000                       1f8f4631de2d2b25
0000000abc                       2f79311058a7cb5e
0000000abd                       e17250d28fdfebe1
000000cris                       ad9795c229dfcad3
00000000Foo © bar 𝌆 baz ☃ qux   55f4b5a313fe8af7
````

## Dieharder test results

```txt
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |           filename             |rands/second|
        mt19937|                      out.bs.bin|  1.27e+08  |
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.24672224|  PASSED
      diehard_operm5|   0|   1000000|     100|0.86756304|  PASSED
  diehard_rank_32x32|   0|     40000|     100|0.36846890|  PASSED
    diehard_rank_6x8|   0|    100000|     100|0.35438687|  PASSED
   diehard_bitstream|   0|   2097152|     100|0.44426423|  PASSED
        diehard_opso|   0|   2097152|     100|0.18338238|  PASSED
        diehard_oqso|   0|   2097152|     100|0.36445942|  PASSED
         diehard_dna|   0|   2097152|     100|0.05589872|  PASSED
diehard_count_1s_str|   0|    256000|     100|0.55079949|  PASSED
diehard_count_1s_byt|   0|    256000|     100|0.80024758|  PASSED
 diehard_parking_lot|   0|     12000|     100|0.56954935|  PASSED
    diehard_2dsphere|   2|      8000|     100|0.37941315|  PASSED
    diehard_3dsphere|   3|      4000|     100|0.90057218|  PASSED
     diehard_squeeze|   0|    100000|     100|0.84598743|  PASSED
        diehard_sums|   0|       100|     100|0.01955341|  PASSED
        diehard_runs|   0|    100000|     100|0.28401112|  PASSED
        diehard_runs|   0|    100000|     100|0.99083453|  PASSED
       diehard_craps|   0|    200000|     100|0.76161367|  PASSED
       diehard_craps|   0|    200000|     100|0.78185101|  PASSED
 marsaglia_tsang_gcd|   0|  10000000|     100|0.16288143|  PASSED
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97730684|  PASSED
         sts_monobit|   1|    100000|     100|0.87566659|  PASSED
            sts_runs|   2|    100000|     100|0.17991919|  PASSED
          sts_serial|   1|    100000|     100|0.76107087|  PASSED
          sts_serial|   2|    100000|     100|0.86344884|  PASSED
          sts_serial|   3|    100000|     100|0.96526723|  PASSED
          sts_serial|   3|    100000|     100|0.99405465|  PASSED
          sts_serial|   4|    100000|     100|0.63635298|  PASSED
          sts_serial|   4|    100000|     100|0.03961769|  PASSED
          sts_serial|   5|    100000|     100|0.32435330|  PASSED
          sts_serial|   5|    100000|     100|0.98549496|  PASSED
          sts_serial|   6|    100000|     100|0.08621325|  PASSED
          sts_serial|   6|    100000|     100|0.57795685|  PASSED
          sts_serial|   7|    100000|     100|0.10896358|  PASSED
          sts_serial|   7|    100000|     100|0.67538887|  PASSED
          sts_serial|   8|    100000|     100|0.95236992|  PASSED
          sts_serial|   8|    100000|     100|0.02314287|  PASSED
          sts_serial|   9|    100000|     100|0.46028163|  PASSED
          sts_serial|   9|    100000|     100|0.56933085|  PASSED
          sts_serial|  10|    100000|     100|0.91053073|  PASSED
          sts_serial|  10|    100000|     100|0.40814421|  PASSED
          sts_serial|  11|    100000|     100|0.86955684|  PASSED
          sts_serial|  11|    100000|     100|0.51021947|  PASSED
          sts_serial|  12|    100000|     100|0.71688562|  PASSED
          sts_serial|  12|    100000|     100|0.77195545|  PASSED
          sts_serial|  13|    100000|     100|0.67648724|  PASSED
          sts_serial|  13|    100000|     100|0.59253023|  PASSED
          sts_serial|  14|    100000|     100|0.03182104|  PASSED
          sts_serial|  14|    100000|     100|0.17926062|  PASSED
          sts_serial|  15|    100000|     100|0.03760870|  PASSED
          sts_serial|  15|    100000|     100|0.11617544|  PASSED
          sts_serial|  16|    100000|     100|0.03928257|  PASSED
          sts_serial|  16|    100000|     100|0.46202569|  PASSED
         rgb_bitdist|   1|    100000|     100|0.58473081|  PASSED
         rgb_bitdist|   2|    100000|     100|0.63642930|  PASSED
         rgb_bitdist|   3|    100000|     100|0.50615655|  PASSED
         rgb_bitdist|   4|    100000|     100|0.89963187|  PASSED
         rgb_bitdist|   5|    100000|     100|0.65571996|  PASSED
         rgb_bitdist|   6|    100000|     100|0.96682576|  PASSED
         rgb_bitdist|   7|    100000|     100|0.42576416|  PASSED
         rgb_bitdist|   8|    100000|     100|0.40707375|  PASSED
         rgb_bitdist|   9|    100000|     100|0.82116208|  PASSED
         rgb_bitdist|  10|    100000|     100|0.69245107|  PASSED
         rgb_bitdist|  11|    100000|     100|0.13169497|  PASSED
         rgb_bitdist|  12|    100000|     100|0.93479625|  PASSED
rgb_minimum_distance|   2|     10000|    1000|0.90822794|  PASSED
rgb_minimum_distance|   3|     10000|    1000|0.70211235|  PASSED
rgb_minimum_distance|   4|     10000|    1000|0.50342075|  PASSED
rgb_minimum_distance|   5|     10000|    1000|0.72528680|  PASSED
    rgb_permutations|   2|    100000|     100|0.69702866|  PASSED
    rgb_permutations|   3|    100000|     100|0.16663950|  PASSED
    rgb_permutations|   4|    100000|     100|0.98350584|  PASSED
    rgb_permutations|   5|    100000|     100|0.75539090|  PASSED
      rgb_lagged_sum|   0|   1000000|     100|0.44816474|  PASSED
      rgb_lagged_sum|   1|   1000000|     100|0.29107079|  PASSED
      rgb_lagged_sum|   2|   1000000|     100|0.67124509|  PASSED
      rgb_lagged_sum|   3|   1000000|     100|0.46205576|  PASSED
      rgb_lagged_sum|   4|   1000000|     100|0.10553558|  PASSED
      rgb_lagged_sum|   5|   1000000|     100|0.33231911|  PASSED
      rgb_lagged_sum|   6|   1000000|     100|0.19452714|  PASSED
      rgb_lagged_sum|   7|   1000000|     100|0.21053587|  PASSED
      rgb_lagged_sum|   8|   1000000|     100|0.77605894|  PASSED
      rgb_lagged_sum|   9|   1000000|     100|0.61211593|  PASSED
      rgb_lagged_sum|  10|   1000000|     100|0.94872748|  PASSED
      rgb_lagged_sum|  11|   1000000|     100|0.91560986|  PASSED
      rgb_lagged_sum|  12|   1000000|     100|0.69546525|  PASSED
      rgb_lagged_sum|  13|   1000000|     100|0.99052601|  PASSED
      rgb_lagged_sum|  14|   1000000|     100|0.14770186|  PASSED
      rgb_lagged_sum|  15|   1000000|     100|0.68454426|  PASSED
      rgb_lagged_sum|  16|   1000000|     100|0.39612251|  PASSED
      rgb_lagged_sum|  17|   1000000|     100|0.84583594|  PASSED
      rgb_lagged_sum|  18|   1000000|     100|0.14888072|  PASSED
      rgb_lagged_sum|  19|   1000000|     100|0.27826107|  PASSED
      rgb_lagged_sum|  20|   1000000|     100|0.80697886|  PASSED
      rgb_lagged_sum|  21|   1000000|     100|0.32797963|  PASSED
      rgb_lagged_sum|  22|   1000000|     100|0.17301146|  PASSED
      rgb_lagged_sum|  23|   1000000|     100|0.99371451|  PASSED
      rgb_lagged_sum|  24|   1000000|     100|0.16349136|  PASSED
      rgb_lagged_sum|  25|   1000000|     100|0.84134581|  PASSED
      rgb_lagged_sum|  26|   1000000|     100|0.50080715|  PASSED
      rgb_lagged_sum|  27|   1000000|     100|0.18029632|  PASSED
      rgb_lagged_sum|  28|   1000000|     100|0.10448283|  PASSED
      rgb_lagged_sum|  29|   1000000|     100|0.95250158|  PASSED
      rgb_lagged_sum|  30|   1000000|     100|0.78741524|  PASSED
      rgb_lagged_sum|  31|   1000000|     100|0.53801403|  PASSED
      rgb_lagged_sum|  32|   1000000|     100|0.35628415|  PASSED
     rgb_kstest_test|   0|     10000|    1000|0.67863361|  PASSED
     dab_bytedistrib|   0|  51200000|       1|0.33887011|  PASSED
             dab_dct| 256|     50000|       1|0.13394638|  PASSED
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.34722201|  PASSED
        dab_filltree|  32|  15000000|       1|0.64103161|  PASSED
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.26371652|  PASSED
       dab_filltree2|   1|   5000000|       1|0.35528108|  PASSED
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.53583603|  PASSED


```

# how were the s-boxes generated?

I went to random.org and generated 32 sets of 256 no-repeat numbers between 0 and 255 inclusive.

# are the s-boxes perfect?

I don't know. 

# dev notes

- try using s-boxes from a block cipher and iterate on improving the mixing function to pass SMHasher with that

## current SMHasher results

Latest version (with extra mix block at end of round):

133 bad lines (18 fails)

```
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Avalanche Tests ]]]

  Testing   24-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.604667%
  Testing   32-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.643333%
  Testing   40-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.700000%
  Testing   48-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.616000%
  Testing   56-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.700667%
  Testing   64-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.614667%
  Testing   72-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.763333%
  Testing   80-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.651333%
  Testing   96-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.686000%
  Testing  112-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.685333%
  Testing  128-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.781333%
  Testing  160-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.777333%
  Testing  512-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.918667%
  Testing 1024-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.944667%


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 536.995739 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ BIC 'Bit Independence Criteria' Tests ]]]

  ...........
  Max bias 0.008420 - ( 79 :  56, 59)


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 274.142124 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Cyclic' Tests ]]]

  Keyset 'Cyclic' - 8 cycles of 8 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    115 (0.49x)
  Testing collisions (high 24-35 bits) - Worst is 34 bits: 32/58 (0.55x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    102 (0.44x)
  Testing collisions (low  24-35 bits) - Worst is 34 bits: 30/58 (0.52x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit  7 - 0.134%

  Keyset 'Cyclic' - 8 cycles of 9 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    118 (0.51x)
  Testing collisions (high 24-35 bits) - Worst is 33 bits: 62/116 (0.53x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    104 (0.45x)
  Testing collisions (low  24-35 bits) - Worst is 27 bits: 3817/7450 (0.51x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit  3 - 0.137%

  Keyset 'Cyclic' - 8 cycles of 10 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    121 (0.52x)
  Testing collisions (high 24-35 bits) - Worst is 34 bits: 32/58 (0.55x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    110 (0.47x)
  Testing collisions (low  24-35 bits) - Worst is 31 bits: 255/465 (0.55x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit  6 - 0.117%

  Keyset 'Cyclic' - 8 cycles of 11 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    125 (0.54x)
  Testing collisions (high 24-35 bits) - Worst is 32 bits: 125/232 (0.54x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    129 (0.55x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 20/29 (0.69x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 47 - 0.156%

  Keyset 'Cyclic' - 8 cycles of 12 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual     74 (1365060426.51x) !!!!!
  Testing collisions (high 32-bit) - Expected        232.8, actual    200 (0.86x)
  Testing collisions (high 24-35 bits) - Worst is 35 bits: 87/29 (2.99x) !!!!!
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    185 (0.79x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 95/29 (3.26x) !!!!!
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 60 - 0.109%

  Keyset 'Cyclic' - 8 cycles of 16 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    120 (0.52x)
  Testing collisions (high 24-35 bits) - Worst is 33 bits: 67/116 (0.58x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    119 (0.51x)
  Testing collisions (low  24-35 bits) - Worst is 31 bits: 241/465 (0.52x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 55 - 0.095%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 14.282571 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Diff 'Differential' Tests ]]]

  Testing 8303632 up-to-5-bit differentials in 64-bit keys -> 64 bit hashes.
  1000 reps, 8303632000 total tests, expecting 0.00 random collisions..........
  0 total collisions, of which 0 single collisions were ignored

  Testing 11017632 up-to-4-bit differentials in 128-bit keys -> 64 bit hashes.
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ DiffDist 'Differential Distribution' Tests ]]]

  Testing bit 0
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    491 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 265/511 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 1
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    514 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 22/31 (0.69x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    493 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 2
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    517 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 3
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    510 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    529 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 42/63 (0.66x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 4
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    477 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    556 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 151/255 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 5
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    558 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 22/31 (0.69x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 6
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    474 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 38/63 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    499 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 270/511 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 7
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    501 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 134/255 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 8
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 82/127 (0.64x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    532 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 9
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    488 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 259/511 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 10
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1056/2047 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 39/63 (0.61x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 11
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    525 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 138/255 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    510 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 12
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 79/127 (0.62x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 262/511 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 13
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 83/127 (0.65x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 14
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    542 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 288/511 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    475 (0.46x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 15
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    490 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    487 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 255/511 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 16
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    506 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 72/127 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    531 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 280/511 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 17
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    515 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 266/511 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    495 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 69/127 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 18
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    511 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 26/31 (0.81x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    495 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 261/511 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 19
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 36/63 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    530 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 134/255 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 20
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    531 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 79/127 (0.62x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 259/511 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 21
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 526/1023 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    493 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 28 bits: 8120/16383 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 22
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    479 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8223/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    522 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1090/2047 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 23
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    485 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    490 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 24/31 (0.75x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 24
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    488 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 22/31 (0.69x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    516 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 30 bits: 2098/4095 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 25
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    498 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 40/63 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    568 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 292/511 (0.57x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 26
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    527 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    548 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 148/255 (0.58x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 27
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    564 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 564/1023 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 28
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    476 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    553 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 45/63 (0.70x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 29
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    564 (0.55x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 287/511 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    533 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 80/127 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 30
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    501 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 27 bits: 16283/32767 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    567 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 31
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    505 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 43/63 (0.67x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 280/511 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 32
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    493 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    666 (0.65x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 79/31 (2.47x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 33
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    487 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8199/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    619 (0.60x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 70/31 (2.19x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 34
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    531 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 24/31 (0.75x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    670 (0.65x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 85/31 (2.66x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 35
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    633 (0.62x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 79/31 (2.47x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 36
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 77/127 (0.60x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    628 (0.61x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 79/31 (2.47x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 37
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    488 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8221/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    644 (0.63x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 84/31 (2.63x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 38
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 80/127 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    680 (0.66x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 88/31 (2.75x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 39
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    508 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 508/1023 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    660 (0.64x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 93/31 (2.91x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 40
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 76/127 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    652 (0.64x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 106/31 (3.31x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 41
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    533 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 74/127 (0.58x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    586 (0.57x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 100/31 (3.13x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 42
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    480 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 27 bits: 16349/32767 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    614 (0.60x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 98/31 (3.06x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 43
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    491 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8282/16383 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    599 (0.58x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 91/31 (2.84x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 44
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    508 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 259/511 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    568 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 69/31 (2.16x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 45
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    578 (0.56x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 77/31 (2.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 46
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 264/511 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    566 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 74/31 (2.31x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 47
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 53/31 (1.66x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 48
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1043/2047 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    533 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 144/255 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 49
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 38/63 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 39/63 (0.61x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 50
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    548 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    518 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1037/2047 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 51
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    509 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    531 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 531/1023 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 52
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    501 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 75/127 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    494 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 22/31 (0.69x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 53
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1062/2047 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    511 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 54
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    517 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    491 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 55
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2117/4095 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    545 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 40/63 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 56
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    477 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    545 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 281/511 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 57
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 66/127 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    465 (0.45x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 67/127 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 58
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1053/2047 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 137/255 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 59
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    495 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    497 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 27 bits: 16175/32767 (0.49x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 60
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    498 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 133/255 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 61
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 26 bits: 32371/65535 (0.49x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    523 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 62
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 72/127 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    516 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 142/255 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 63
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    522 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 133/255 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    505 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 24/31 (0.75x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 149.220366 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ 'Hashmap' Speed Tests ]]]

  std::unordered_map
  Init std HashMapTest:     2290.791 cycles/op (102401 inserts, 1% deletions)
  Running std HashMapTest:  2055.346 cycles/op (43.3 stdv)

  greg7mdp/parallel-hashmap
  Init fast HashMapTest:    1990.744 cycles/op (102401 inserts, 1% deletions)
  Running fast HashMapTest: 1838.525 cycles/op (12.0 stdv)  ....... FAIL


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 7.350467 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ MomentChi2 Tests ]]]

  Running 1st unseeded MomentChi2 for the low 32bits/step 3 ... 38918217.877762 - 410438.569603
  Running 2nd   seeded MomentChi2 for the low 32bits/step 3 ... 38919818.704881 - 410496.448693
  KeySeedMomentChi2:	3.12162	PASS


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 1182.760567 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Permutation' Tests ]]]

  Combination Lowbits Tests:
  Keyset 'Combination' - up to 7 blocks from a set of 8 - 2396744 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1337.5, actual    684 (0.51x)
  Testing collisions (high 25-38 bits) - Worst is 37 bits: 25/41 (0.60x)
  Testing collisions (high 12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1337.5, actual   1368 (1.02x) (31)
  Testing collisions (low  25-38 bits) - Worst is 32 bits: 1368/1337 (1.02x)
  Testing collisions (low  12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit 20 - 0.059%


  Combination Highbits Tests
  Keyset 'Combination' - up to 7 blocks from a set of 8 - 2396744 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1337.5, actual    628 (0.47x)
  Testing collisions (high 25-38 bits) - Worst is 30 bits: 2718/5349 (0.51x)
  Testing collisions (high 12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1337.5, actual    665 (0.50x)
  Testing collisions (low  25-38 bits) - Worst is 35 bits: 86/167 (0.51x)
  Testing collisions (low  12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit  6 - 0.078%


  Combination Hi-Lo Tests:
  Keyset 'Combination' - up to 6 blocks from a set of 15 - 12204240 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      34678.6, actual  17304 (0.50x)
  Testing collisions (high 27-42 bits) - Worst is 42 bits: 20/33 (0.59x)
  Testing collisions (high 12-bit) - Expected   12204240.0, actual 12200144 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   12204240.0, actual 12203984 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      34678.6, actual  20456 (0.59x)
  Testing collisions (low  27-42 bits) - Worst is 34 bits: 5232/8669 (0.60x)
  Testing collisions (low  12-bit) - Expected   12204240.0, actual 12200144 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   12204240.0, actual 12203984 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  1 - 0.029%


  Combination 0x8000000 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8367568 (2193509053225.09x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8367568 (510.72x) (8351185) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8367568/31 (261486.66x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384540 (1.00x) (-4066)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8367568 (510.72x) (8351185) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8367568/31 (261486.66x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384537 (1.00x) (-4069)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 57 - 99.608% !!!!!

  *********FAIL*********

  Combination 0x0000001 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8247969 (2162156874281.74x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8247972 (503.42x) (8231589) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8247969/31 (257749.18x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384510 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8247984 (503.42x) (8231601) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8247969/31 (257749.18x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384510 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 98.001% !!!!!

  *********FAIL*********

  Combination 0x800000000000000 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388288 (2198940680142.59x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388288 (511.98x) (8371905) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388288/31 (262134.16x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388298 (1.00x) (-308)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388424 (1.00x) (-182)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388288 (511.98x) (8371905) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388288/31 (262134.16x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388302 (1.00x) (-304)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388425 (1.00x) (-181)
  Testing distribution - Worst bias is the 20-bit window at bit  6 - 99.995% !!!!!

  *********FAIL*********

  Combination 0x000000000000001 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8378534 (2196383726042.53x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8378534 (511.39x) (8362151) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8378534/31 (261829.34x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384868 (1.00x) (-3738)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8378534 (511.39x) (8362151) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8378534/31 (261829.34x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384854 (1.00x) (-3752)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 44 - 99.910% !!!!!

  *********FAIL*********

  Combination 16-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8387385 (2198703963969.50x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8387385 (511.93x) (8371002) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8387385/31 (262105.94x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8387522 (1.00x) (-1084)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388352 (1.00x) (-254)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8387385 (511.93x) (8371002) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8387385/31 (262105.94x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8387557 (1.00x) (-1049)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388353 (1.00x) (-253)
  Testing distribution - Worst bias is the 20-bit window at bit 18 - 99.990% !!!!!

  *********FAIL*********

  Combination 16-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388520 (2199001497586.84x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388520 (511.99x) (8372137) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388520/31 (262141.41x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388521 (1.00x) (-85)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388533 (1.00x) (-73)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388520 (511.99x) (8372137) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388520/31 (262141.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388521 (1.00x) (-85)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388534 (1.00x) (-72)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.999% !!!!!

  *********FAIL*********

  Combination 32-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388338 (1.00x) (-268)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388427 (1.00x) (-179)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388342 (1.00x) (-264)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388441 (1.00x) (-165)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 32-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388564 (1.00x) (-42)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388565 (1.00x) (-41)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.999% !!!!!

  *********FAIL*********

  Combination 64-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388343 (1.00x) (-263)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388437 (1.00x) (-169)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388342 (1.00x) (-264)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388443 (1.00x) (-163)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 64-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388563 (1.00x) (-43)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388565 (1.00x) (-41)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388564 (1.00x) (-42)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.999% !!!!!

  *********FAIL*********

  Combination 128-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388343 (1.00x) (-263)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388443 (1.00x) (-163)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388342 (1.00x) (-264)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388441 (1.00x) (-165)
  Testing distribution - Worst bias is the 20-bit window at bit 44 - 99.998% !!!!!

  *********FAIL*********

  Combination 128-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388565 (1.00x) (-41)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.999% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 175.171766 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Sanity Tests ]]]

  Verification value 0xC50119B7 ....... SKIP (self- or unseeded)
  Running sanity check 1     .......... PASS
  Running AppendedZeroesTest .......... PASS


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 46.644863 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Seed' Tests ]]]

  Keyset 'Seed' - 5000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       5820.8, actual   2919 (0.50x)
  Testing collisions (high 26-40 bits) - Worst is 39 bits: 27/45 (0.59x)
  Testing collisions (high 12-bit) - Expected    5000000.0, actual 4995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    5000000.0, actual 4999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       5820.8, actual   2918 (0.50x)
  Testing collisions (low  26-40 bits) - Worst is 40 bits: 13/22 (0.57x)
  Testing collisions (low  12-bit) - Expected    5000000.0, actual 4995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    5000000.0, actual 4999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 47 - 0.039%



  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 10.525724 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Sparse' Tests ]]]

  Keyset 'Sparse' - 16-bit keys with up to 9 bits set - 50643 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected          0.6, actual      1 (1.67x) (1)
  Testing collisions (high 19-26 bits) - Worst is 23 bits: 151/305 (0.49x)
  Testing collisions (high 12-bit) - Expected      50643.0, actual  46547 (0.92x)
  Testing collisions (high  8-bit) - Expected      50643.0, actual  50387 (0.99x) (-256)
  Testing collisions (low  32-bit) - Expected          0.6, actual      0 (0.00x)
  Testing collisions (low  19-26 bits) - Worst is 26 bits: 29/38 (0.76x)
  Testing collisions (low  12-bit) - Expected      50643.0, actual  46547 (0.92x)
  Testing collisions (low   8-bit) - Expected      50643.0, actual  50387 (0.99x) (-256)
  Testing distribution - Worst bias is the 13-bit window at bit 46 - 0.457%

  Keyset 'Sparse' - 24-bit keys with up to 8 bits set - 1271626 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        376.5, actual    192 (0.51x)
  Testing collisions (high 24-36 bits) - Worst is 35 bits: 35/47 (0.74x)
  Testing collisions (high 12-bit) - Expected    1271626.0, actual 1267530 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1271626.0, actual 1271370 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        376.5, actual    178 (0.47x)
  Testing collisions (low  24-36 bits) - Worst is 35 bits: 27/47 (0.57x)
  Testing collisions (low  12-bit) - Expected    1271626.0, actual 1267530 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1271626.0, actual 1271370 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 41 - 0.125%

  Keyset 'Sparse' - 32-bit keys with up to 7 bits set - 4514873 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4746.0, actual   2404 (0.51x)
  Testing collisions (high 26-39 bits) - Worst is 34 bits: 613/1186 (0.52x)
  Testing collisions (high 12-bit) - Expected    4514873.0, actual 4510777 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4514873.0, actual 4514617 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4746.0, actual   2370 (0.50x)
  Testing collisions (low  26-39 bits) - Worst is 38 bits: 44/74 (0.59x)
  Testing collisions (low  12-bit) - Expected    4514873.0, actual 4510777 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4514873.0, actual 4514617 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 63 - 0.223%

  Keyset 'Sparse' - 40-bit keys with up to 6 bits set - 4598479 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4923.4, actual   2384 (0.48x)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 23/38 (0.60x)
  Testing collisions (high 12-bit) - Expected    4598479.0, actual 4594383 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4598479.0, actual 4598223 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4923.4, actual   5565 (1.13x) (642)
  Testing collisions (low  26-39 bits) - Worst is 38 bits: 98/76 (1.27x)
  Testing collisions (low  12-bit) - Expected    4598479.0, actual 4594383 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4598479.0, actual 4598223 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 1.863% !!!!!

  Keyset 'Sparse' - 48-bit keys with up to 6 bits set - 14196869 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      46927.3, actual  23420 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 43 bits: 12/22 (0.52x)
  Testing collisions (high 12-bit) - Expected   14196869.0, actual 14192773 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14196869.0, actual 14196613 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      46927.3, actual 198065 (4.22x) (151138) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 40 bits: 4611/183 (25.15x) !!!!!
  Testing collisions (low  12-bit) - Expected   14196869.0, actual 14192773 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14196869.0, actual 14196613 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 6.596% !!!!!

  Keyset 'Sparse' - 56-bit keys with up to 5 bits set - 4216423 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4139.3, actual   1994 (0.48x)
  Testing collisions (high 26-39 bits) - Worst is 29 bits: 16453/33114 (0.50x)
  Testing collisions (high 12-bit) - Expected    4216423.0, actual 4212327 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4216423.0, actual 4216167 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4139.3, actual  22618 (5.46x) (18479) !!!!!
  Testing collisions (low  26-39 bits) - Worst is 39 bits: 935/32 (28.91x) !!!!!
  Testing collisions (low  12-bit) - Expected    4216423.0, actual 4212327 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4216423.0, actual 4216167 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 3.171% !!!!!

  Keyset 'Sparse' - 64-bit keys with up to 5 bits set - 8303633 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      16053.7, actual   7977 (0.50x)
  Testing collisions (high 27-41 bits) - Worst is 38 bits: 141/250 (0.56x)
  Testing collisions (high 12-bit) - Expected    8303633.0, actual 8299537 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    8303633.0, actual 8303377 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16053.7, actual  27541 (1.72x) (11488)
  Testing collisions (low  27-41 bits) - Worst is 40 bits: 963/62 (15.36x) !!!!!
  Testing collisions (low  12-bit) - Expected    8303633.0, actual 8299537 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    8303633.0, actual 8303377 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 1.012% !!!!!

  Keyset 'Sparse' - 72-bit keys with up to 5 bits set - 15082603 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      52965.5, actual  26546 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 40 bits: 120/206 (0.58x)
  Testing collisions (high 12-bit) - Expected   15082603.0, actual 15078507 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   15082603.0, actual 15082347 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      52965.5, actual  54618 (1.03x) (1653)
  Testing collisions (low  28-43 bits) - Worst is 41 bits: 773/103 (7.47x) !!!!!
  Testing collisions (low  12-bit) - Expected   15082603.0, actual 15078507 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   15082603.0, actual 15082347 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 0.407%

  Keyset 'Sparse' - 96-bit keys with up to 4 bits set - 3469497 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       2802.7, actual   1419 (0.51x)
  Testing collisions (high 26-39 bits) - Worst is 36 bits: 89/175 (0.51x)
  Testing collisions (high 12-bit) - Expected    3469497.0, actual 3465401 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    3469497.0, actual 3469241 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       2802.7, actual   3733 (1.33x) (931)
  Testing collisions (low  26-39 bits) - Worst is 39 bits: 244/21 (11.14x) !!!!!
  Testing collisions (low  12-bit) - Expected    3469497.0, actual 3465401 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    3469497.0, actual 3469241 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  4 - 0.198%

  Keyset 'Sparse' - 160-bit keys with up to 4 bits set - 26977161 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected     169446.5, actual  84272 (0.50x)
  Testing collisions (high 29-45 bits) - Worst is 36 bits: 5375/10590 (0.51x)
  Testing collisions (high 12-bit) - Expected   26977161.0, actual 26973065 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   26977161.0, actual 26976905 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     169446.5, actual  91014 (0.54x)
  Testing collisions (low  29-45 bits) - Worst is 40 bits: 753/661 (1.14x)
  Testing collisions (low  12-bit) - Expected   26977161.0, actual 26973065 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   26977161.0, actual 26976905 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  4 - 0.020%

  Keyset 'Sparse' - 256-bit keys with up to 3 bits set - 2796417 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1820.7, actual    966 (0.53x)
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 17/28 (0.60x)
  Testing collisions (high 12-bit) - Expected    2796417.0, actual 2792321 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2796417.0, actual 2796161 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1820.7, actual  28498 (15.65x) (26678) !!!!!
  Testing collisions (low  25-38 bits) - Worst is 38 bits: 26911/28 (945.95x) !!!!!
  Testing collisions (low  12-bit) - Expected    2796417.0, actual 2792321 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2796417.0, actual 2796161 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  8 - 0.522%

  Keyset 'Sparse' - 512-bit keys with up to 3 bits set - 22370049 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 19573632 (721534813160.98x) !!!!!
  Testing collisions (high 32-bit) - Expected     116512.9, actual 19574509 (168.00x) (19457997) !!!!!
  Testing collisions (high 28-44 bits) - Worst is 44 bits: 19573632/28 (688109.22x) !!!!!
  Testing collisions (high 12-bit) - Expected   22370049.0, actual 22365953 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   22370049.0, actual 22369793 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     116512.9, actual 19586229 (168.10x) (19469717) !!!!!
  Testing collisions (low  28-44 bits) - Worst is 44 bits: 19584345/28 (688485.83x) !!!!!
  Testing collisions (low  12-bit) - Expected   22370049.0, actual 22365953 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   22370049.0, actual 22369793 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  1 - 24.969% !!!!!

  Keyset 'Sparse' - 1024-bit keys with up to 2 bits set - 524801 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 491904 (32946675339221.87x) !!!!!
  Testing collisions (high 32-bit) - Expected         64.1, actual 491904 (7671.00x) (491840) !!!!!
  Testing collisions (high 23-33 bits) - Worst is 33 bits: 491904/32 (15341.99x) !!!!!
  Testing collisions (high 12-bit) - Expected     524801.0, actual 520705 (0.99x) (-4096)
  Testing collisions (high  8-bit) - Expected     524801.0, actual 524545 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected         64.1, actual 491954 (7671.78x) (491890) !!!!!
  Testing collisions (low  23-33 bits) - Worst is 33 bits: 491952/32 (15343.49x) !!!!!
  Testing collisions (low  12-bit) - Expected     524801.0, actual 520706 (0.99x) (-4095)
  Testing collisions (low   8-bit) - Expected     524801.0, actual 524545 (1.00x) (-256)
  Testing distribution - Worst bias is the 16-bit window at bit 25 - 65.561% !!!!!

  Keyset 'Sparse' - 2048-bit keys with up to 2 bits set - 2098177 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 2065280 (8653954845535.40x) !!!!!
  Testing collisions (high 32-bit) - Expected       1025.0, actual 2065280 (2014.91x) (2064255) !!!!!
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 2065280/32 (64476.99x) !!!!!
  Testing collisions (high 12-bit) - Expected    2098177.0, actual 2094082 (1.00x) (-4095)
  Testing collisions (high  8-bit) - Expected    2098177.0, actual 2097921 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1025.0, actual 2065326 (2014.95x) (2064301) !!!!!
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 2065325/32 (64478.39x) !!!!!
  Testing collisions (low  12-bit) - Expected    2098177.0, actual 2094082 (1.00x) (-4095)
  Testing collisions (low   8-bit) - Expected    2098177.0, actual 2097921 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit 20 - 88.813% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 242.346638 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Speed Tests ]]]

  Bulk speed test - 262144-byte keys
  Alignment  7 -  2.450 bytes/cycle - 7009.07 MiB/sec @ 3 ghz
  Alignment  6 -  2.398 bytes/cycle - 6860.08 MiB/sec @ 3 ghz
  Alignment  5 -  2.407 bytes/cycle - 6887.17 MiB/sec @ 3 ghz
  Alignment  4 -  2.305 bytes/cycle - 6593.25 MiB/sec @ 3 ghz
  Alignment  3 -  2.486 bytes/cycle - 7111.60 MiB/sec @ 3 ghz
  Alignment  2 -  2.635 bytes/cycle - 7538.03 MiB/sec @ 3 ghz
  Alignment  1 -  2.636 bytes/cycle - 7542.20 MiB/sec @ 3 ghz
  Alignment  0 -  2.708 bytes/cycle - 7747.74 MiB/sec @ 3 ghz
  Average      -  2.503 bytes/cycle - 7161.14 MiB/sec @ 3 ghz

  Small key speed test -    1-byte keys -  1420.21 cycles/hash
  Small key speed test -    2-byte keys -  1425.26 cycles/hash
  Small key speed test -    3-byte keys -  1457.47 cycles/hash
  Small key speed test -    4-byte keys -  1426.57 cycles/hash
  Small key speed test -    5-byte keys -  1442.46 cycles/hash
  Small key speed test -    6-byte keys -  1461.81 cycles/hash
  Small key speed test -    7-byte keys -  1487.63 cycles/hash
  Small key speed test -    8-byte keys -  1395.91 cycles/hash
  Small key speed test -    9-byte keys -  1422.68 cycles/hash
  Small key speed test -   10-byte keys -  1422.46 cycles/hash
  Small key speed test -   11-byte keys -  1423.21 cycles/hash
  Small key speed test -   12-byte keys -  1441.70 cycles/hash
  Small key speed test -   13-byte keys -  1455.90 cycles/hash
  Small key speed test -   14-byte keys -  1482.38 cycles/hash
  Small key speed test -   15-byte keys -  1481.56 cycles/hash
  Small key speed test -   16-byte keys -  1362.30 cycles/hash
  Small key speed test -   17-byte keys -  1186.03 cycles/hash
  Small key speed test -   18-byte keys -  1191.55 cycles/hash
  Small key speed test -   19-byte keys -  1198.40 cycles/hash
  Small key speed test -   20-byte keys -  1201.68 cycles/hash
  Small key speed test -   21-byte keys -  1205.90 cycles/hash
  Small key speed test -   22-byte keys -  1210.36 cycles/hash
  Small key speed test -   23-byte keys -  1207.48 cycles/hash
  Small key speed test -   24-byte keys -  1189.98 cycles/hash
  Small key speed test -   25-byte keys -  1189.54 cycles/hash
  Small key speed test -   26-byte keys -  1199.15 cycles/hash
  Small key speed test -   27-byte keys -  1200.59 cycles/hash
  Small key speed test -   28-byte keys -  1202.86 cycles/hash
  Small key speed test -   29-byte keys -  1204.72 cycles/hash
  Small key speed test -   30-byte keys -  1207.38 cycles/hash
  Small key speed test -   31-byte keys -  1208.47 cycles/hash
  Average                                    1323.019 cycles/hash


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 312.053448 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Text' Tests ]]]

  Keyset 'Text' - keys of form "Foo[XXXX]Bar" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25234 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 42 bits: 28/49 (0.56x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual 1447737 (28.48x) (1396901) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 42 bits: 4996/49 (100.63x) !!!!!
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  4 - 44.524% !!!!!

  Keyset 'Text' - keys of form "FooBar[XXXX]" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25230 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 42 bits: 34/49 (0.68x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual  25379 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 34 bits: 6442/12709 (0.51x)
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 28 - 0.016%

  Keyset 'Text' - keys of form "[XXXX]FooBar" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25769 (0.51x)
  Testing collisions (high 28-43 bits) - Worst is 41 bits: 55/99 (0.55x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual  25221 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 40 bits: 118/198 (0.59x)
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 62 - 0.075%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 93.631175 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'TwoBytes' Tests ]]]

  Keyset 'TwoBytes' - up-to-4-byte keys, 652545 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected         99.1, actual     47 (0.47x)
  Testing collisions (high 23-34 bits) - Worst is 31 bits: 108/198 (0.54x)
  Testing collisions (high 12-bit) - Expected     652545.0, actual 648449 (0.99x) (-4096)
  Testing collisions (high  8-bit) - Expected     652545.0, actual 652289 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected         99.1, actual     66 (0.67x)
  Testing collisions (low  23-34 bits) - Worst is 32 bits: 66/99 (0.67x)
  Testing collisions (low  12-bit) - Expected     652545.0, actual 648449 (0.99x) (-4096)
  Testing collisions (low   8-bit) - Expected     652545.0, actual 652289 (1.00x) (-256)
  Testing distribution - Worst bias is the 16-bit window at bit  0 - 2.874% !!!!!

  Keyset 'TwoBytes' - up-to-8-byte keys, 5471025 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       6969.1, actual   3515 (0.50x)
  Testing collisions (high 26-40 bits) - Worst is 36 bits: 228/435 (0.52x)
  Testing collisions (high 12-bit) - Expected    5471025.0, actual 5466929 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    5471025.0, actual 5470769 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       6969.1, actual 141453 (20.30x) (134484) !!!!!
  Testing collisions (low  26-40 bits) - Worst is 40 bits: 5226/27 (191.97x) !!!!!
  Testing collisions (low  12-bit) - Expected    5471025.0, actual 5466929 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    5471025.0, actual 5470769 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 16.183% !!!!!

  Keyset 'TwoBytes' - up-to-12-byte keys, 18616785 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      80695.5, actual  40416 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 41 bits: 81/157 (0.51x)
  Testing collisions (high 12-bit) - Expected   18616785.0, actual 18612689 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   18616785.0, actual 18616529 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      80695.5, actual 346341 (4.29x) (265646) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 41 bits: 6742/157 (42.78x) !!!!!
  Testing collisions (low  12-bit) - Expected   18616785.0, actual 18612689 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   18616785.0, actual 18616529 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 3.240% !!!!!

  Keyset 'TwoBytes' - up-to-16-byte keys, 44251425 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected     455926.3, actual 227969 (0.50x)
  Testing collisions (high 29-46 bits) - Worst is 45 bits: 36/55 (0.65x)
  Testing collisions (high 12-bit) - Expected   44251425.0, actual 44247329 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   44251425.0, actual 44251169 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     455926.3, actual 709353 (1.56x) (253427)
  Testing collisions (low  29-46 bits) - Worst is 45 bits: 756/55 (13.58x) !!!!!
  Testing collisions (low  12-bit) - Expected   44251425.0, actual 44247329 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   44251425.0, actual 44251169 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 0.893%

  Keyset 'TwoBytes' - up-to-20-byte keys, 86536545 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected    1743569.4, actual 867050 (0.50x)
  Testing collisions (high 30-48 bits) - Worst is 47 bits: 36/53 (0.68x)
  Testing collisions (high 12-bit) - Expected   86536545.0, actual 86532449 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   86536545.0, actual 86536289 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected    1743569.4, actual 1540839 (0.88x)
  Testing collisions (low  30-48 bits) - Worst is 46 bits: 619/106 (5.82x) !!!!!
  Testing collisions (low  12-bit) - Expected   86536545.0, actual 86532449 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   86536545.0, actual 86536289 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 0.311%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 297.242912 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Window' Tests ]]]

  Keyset 'Window' -  32-bit key,  25-bit window - 32 tests, 33554432 keys per test
  Window at   0 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   1 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   2 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   3 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   4 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   5 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   6 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   7 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   8 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   9 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  10 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  11 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  12 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  13 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  14 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  15 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  16 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  17 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  18 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  19 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  20 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  21 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  22 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  23 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  24 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  25 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  26 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  27 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  28 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  29 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  30 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  31 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  32 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 602.160128 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Zeroes' Tests ]]]

  Keyset 'Zeroes' - 204800 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected          9.8, actual      4 (0.41x)
  Testing collisions (high 21-30 bits) - Worst is 30 bits: 25/39 (0.64x)
  Testing collisions (high 12-bit) - Expected     204800.0, actual 200704 (0.98x)
  Testing collisions (high  8-bit) - Expected     204800.0, actual 204544 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected          9.8, actual      6 (0.61x)
  Testing collisions (low  21-30 bits) - Worst is 23 bits: 2440/4999 (0.49x)
  Testing collisions (low  12-bit) - Expected     204800.0, actual 200704 (0.98x)
  Testing collisions (low   8-bit) - Expected     204800.0, actual 204544 (1.00x) (-256)
  Testing distribution - Worst bias is the 15-bit window at bit 32 - 0.258%



  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 3.422659 seconds`
```

128 bad lines (22 fails)
```
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Avalanche Tests ]]]

  Testing   24-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.628667%
  Testing   32-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.572000%
  Testing   40-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.626667%
  Testing   48-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.648667%
  Testing   56-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.678667%
  Testing   64-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.640000%
  Testing   72-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.615333%
  Testing   80-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.722667%
  Testing   96-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.696000%
  Testing  112-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.678667%
  Testing  128-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.690000%
  Testing  160-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.729333%
  Testing  512-bit keys ->  64-bit hashes, 300000 reps worst bias is 100.000000% !!!!!
  Testing 1024-bit keys ->  64-bit hashes, 300000 reps worst bias is 100.000000% !!!!!
  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 500.798745 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ BIC 'Bit Independence Criteria' Tests ]]]

  ...........
  Max bias 0.008516 - ( 78 :   1, 17)


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 332.682932 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Cyclic' Tests ]]]

  Keyset 'Cyclic' - 8 cycles of 8 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    122 (0.52x)
  Testing collisions (high 24-35 bits) - Worst is 32 bits: 122/232 (0.52x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    128 (0.55x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 19/29 (0.65x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 46 - 0.144%

  Keyset 'Cyclic' - 8 cycles of 9 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    111 (0.48x)
  Testing collisions (high 24-35 bits) - Worst is 34 bits: 35/58 (0.60x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    109 (0.47x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 16/29 (0.55x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 25 - 0.126%

  Keyset 'Cyclic' - 8 cycles of 10 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    112 (0.48x)
  Testing collisions (high 24-35 bits) - Worst is 34 bits: 33/58 (0.57x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    111 (0.48x)
  Testing collisions (low  24-35 bits) - Worst is 30 bits: 521/931 (0.56x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 10 - 0.111%

  Keyset 'Cyclic' - 8 cycles of 11 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    121 (0.52x)
  Testing collisions (high 24-35 bits) - Worst is 32 bits: 121/232 (0.52x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    110 (0.47x)
  Testing collisions (low  24-35 bits) - Worst is 28 bits: 1865/3725 (0.50x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 36 - 0.092%

  Keyset 'Cyclic' - 8 cycles of 12 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual     74 (1365060426.51x) !!!!!
  Testing collisions (high 32-bit) - Expected        232.8, actual    199 (0.85x)
  Testing collisions (high 24-35 bits) - Worst is 35 bits: 86/29 (2.95x) !!!!!
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    200 (0.86x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 85/29 (2.92x) !!!!!
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 36 - 0.082%

  Keyset 'Cyclic' - 8 cycles of 16 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    104 (0.45x)
  Testing collisions (high 24-35 bits) - Worst is 29 bits: 958/1862 (0.51x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    117 (0.50x)
  Testing collisions (low  24-35 bits) - Worst is 33 bits: 60/116 (0.52x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit  2 - 0.107%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 14.909307 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Diff 'Differential' Tests ]]]

  Testing 8303632 up-to-5-bit differentials in 64-bit keys -> 64 bit hashes.
  1000 reps, 8303632000 total tests, expecting 0.00 random collisions..........
  0 total collisions, of which 0 single collisions were ignored

  Testing 11017632 up-to-4-bit differentials in 128-bit keys -> 64 bit hashes.
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ DiffDist 'Differential Distribution' Tests ]]]

  Testing bit 0
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    510 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 141/255 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 1
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    517 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    541 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 541/1023 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 2
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    539 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 141/255 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    489 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 258/511 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 3
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    529 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 38/63 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 4
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    566 (0.55x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 566/1023 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    471 (0.46x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 66/127 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 5
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    508 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 69/127 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    530 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 6
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    523 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 523/1023 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    527 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 28/31 (0.88x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 7
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    518 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 47/63 (0.73x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 8
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    518 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 36/63 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    489 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 30 bits: 2103/4095 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 9
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    531 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 38/63 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    562 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 562/1023 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 10
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    455 (0.44x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 133/255 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    482 (0.47x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 11
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    501 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    517 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 12
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1052/2047 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    527 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 75/127 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 13
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2159/4095 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    549 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 549/1023 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 14
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    539 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 539/1023 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 15
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    540 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 39/63 (0.61x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    545 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 24/31 (0.75x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 16
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    532 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    511 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 29 bits: 4092/8191 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 17
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 18
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    500 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    559 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 559/1023 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 19
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    536 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 85/127 (0.66x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    480 (0.47x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 20
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    561 (0.55x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 27/31 (0.84x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 21
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    581 (0.57x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 581/1023 (0.57x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    510 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1029/2047 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 22
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 36/63 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    546 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 297/511 (0.58x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 23
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    490 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 64/127 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    489 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1024/2047 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 24
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    558 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 281/511 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    475 (0.46x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 67/127 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 25
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    471 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    488 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 26
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    493 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 29 bits: 4119/8191 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 27
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    516 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 136/255 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 28
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 67/127 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    514 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 68/127 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 29
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    515 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 73/127 (0.57x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    541 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 36/63 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 30
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    499 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 24/31 (0.75x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 31
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 142/255 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1058/2047 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 32
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    514 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    510 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 48/63 (0.75x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 33
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 75/127 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    514 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 130/255 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 34
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    494 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 263/511 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    467 (0.46x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 130/255 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 35
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    470 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    551 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 36
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    516 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 25/31 (0.78x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    522 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 141/255 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 37
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    482 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 136/255 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 38
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 261/511 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    495 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 36/63 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 39
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    505 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1050/2047 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    488 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 67/127 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 40
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    529 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 26/31 (0.81x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 41/63 (0.64x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 41
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1058/2047 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    556 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 77/127 (0.60x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 42
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    466 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    516 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 41/63 (0.64x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 43
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    505 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    518 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 43/63 (0.67x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 44
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    490 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2062/4095 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 45
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    524 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 271/511 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 46
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    486 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 67/127 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    485 (0.47x)
  Testing collisions (low  25-37 bits) - Worst is 28 bits: 8303/16383 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 47
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    518 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 27/31 (0.84x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    495 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 33/63 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 48
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 71/127 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    540 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 540/1023 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 49
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    475 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 27 bits: 16166/32767 (0.49x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 50
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    508 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 137/255 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    508 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 268/511 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 51
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    508 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 29 bits: 4231/8191 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 136/255 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 52
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    503 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 138/255 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 65/127 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 53
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 268/511 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    492 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 54
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    534 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 534/1023 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 55
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    518 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2134/4095 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    493 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 38/63 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 56
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    485 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 29 bits: 4103/8191 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    488 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 57
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    487 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    534 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 270/511 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 58
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    547 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 39/63 (0.61x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1046/2047 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 59
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    495 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2048/4095 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    499 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 30 bits: 2051/4095 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 60
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    524 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1064/2047 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 61
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    543 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 77/127 (0.60x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 62
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    552 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    526 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 526/1023 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 63
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    534 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 289/511 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)



  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 163.619732 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ 'Hashmap' Speed Tests ]]]

  Unable to open words dict file /usr/share/dict/words
  std::unordered_map
  Init std HashMapTest:     inf cycles/op (0 inserts, 1% deletions)
  Running std HashMapTest:  SKIP ....... FAIL


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 0.000102 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ MomentChi2 Tests ]]]

  Running 1st unseeded MomentChi2 for the low 32bits/step 3 ... 38920173.150610 - 410510.591777
  Running 2nd   seeded MomentChi2 for the low 32bits/step 3 ... 38917774.500627 - 410432.084846
  KeySeedMomentChi2:	7.00843	FAIL!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 1153.336840 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Permutation' Tests ]]]

  Combination Lowbits Tests:
  Keyset 'Combination' - up to 7 blocks from a set of 8 - 2396744 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1337.5, actual   1286 (0.96x)
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 263/20 (12.58x) !!!!!
  Testing collisions (high 12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1337.5, actual    799 (0.60x)
  Testing collisions (low  25-38 bits) - Worst is 33 bits: 407/668 (0.61x)
  Testing collisions (low  12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit 11 - 0.071%

  *********FAIL*********

  Combination Highbits Tests
  Keyset 'Combination' - up to 7 blocks from a set of 8 - 2396744 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1337.5, actual    724 (0.54x)
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 15/20 (0.72x)
  Testing collisions (high 12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1337.5, actual    717 (0.54x)
  Testing collisions (low  25-38 bits) - Worst is 28 bits: 393928/21399 (18.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit  2 - 40.268% !!!!!

  *********FAIL*********

  Combination Hi-Lo Tests:
  Keyset 'Combination' - up to 6 blocks from a set of 15 - 12204240 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      34678.6, actual  17287 (0.50x)
  Testing collisions (high 27-42 bits) - Worst is 42 bits: 24/33 (0.71x)
  Testing collisions (high 12-bit) - Expected   12204240.0, actual 12200144 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   12204240.0, actual 12203984 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      34678.6, actual  19059 (0.55x)
  Testing collisions (low  27-42 bits) - Worst is 32 bits: 19059/34678 (0.55x)
  Testing collisions (low  12-bit) - Expected   12204240.0, actual 12200144 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   12204240.0, actual 12203984 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  4 - 0.037%


  Combination 0x8000000 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8368112 (2193651659646.09x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8368114 (510.75x) (8351731) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8368112/31 (261503.66x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384541 (1.00x) (-4065)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8380816 (511.52x) (8364433) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8378232/31 (261819.91x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8386064 (1.00x) (-2542)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  3 - 99.926% !!!!!

  *********FAIL*********

  Combination 0x0000001 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8247969 (2162156874281.74x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8247976 (503.42x) (8231593) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8247969/31 (257749.18x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384510 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8339461 (509.00x) (8323078) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8247969/31 (257749.18x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384510 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 10 - 99.242% !!!!!

  *********FAIL*********

  Combination 0x800000000000000 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388288 (2198940680142.59x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388288 (511.98x) (8371905) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388288/31 (262134.16x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388306 (1.00x) (-300)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388425 (1.00x) (-181)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388440 (511.99x) (8372057) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388440/31 (262138.91x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388446 (1.00x) (-160)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388484 (1.00x) (-122)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 0x000000000000001 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8378534 (2196383726042.53x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8378535 (511.39x) (8362152) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8378534/31 (261829.34x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384873 (1.00x) (-3733)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8378534 (511.39x) (8362151) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8378534/31 (261829.34x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384867 (1.00x) (-3739)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 50 - 99.910% !!!!!

  *********FAIL*********

  Combination 16-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8387385 (2198703963969.50x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8387385 (511.93x) (8371002) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8387385/31 (262105.94x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8387561 (1.00x) (-1045)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388354 (1.00x) (-252)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8387385 (511.93x) (8371002) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8387385/31 (262105.94x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8387540 (1.00x) (-1066)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388351 (1.00x) (-255)
  Testing distribution - Worst bias is the 20-bit window at bit 38 - 99.990% !!!!!

  *********FAIL*********

  Combination 16-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388520 (2199001497586.84x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388520 (511.99x) (8372137) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388520/31 (262141.41x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388521 (1.00x) (-85)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388535 (1.00x) (-71)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388567 (1.00x) (-39)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.999% !!!!!

  *********FAIL*********

  Combination 32-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388336 (1.00x) (-270)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388436 (1.00x) (-170)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388340 (1.00x) (-266)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388441 (1.00x) (-165)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 32-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388566 (1.00x) (-40)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388584 (512.00x) (8372201) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388584/31 (262143.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388586 (1.00x) (-20)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 100.000% !!!!!

  *********FAIL*********

  Combination 64-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388341 (1.00x) (-265)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388449 (1.00x) (-157)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388337 (1.00x) (-269)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388432 (1.00x) (-174)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 64-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388564 (1.00x) (-42)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388564 (1.00x) (-42)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388584 (512.00x) (8372201) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388584/31 (262143.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388585 (1.00x) (-21)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 100.000% !!!!!

  *********FAIL*********

  Combination 128-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388342 (1.00x) (-264)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388437 (1.00x) (-169)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388337 (1.00x) (-269)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388436 (1.00x) (-170)
  Testing distribution - Worst bias is the 20-bit window at bit 32 - 99.998% !!!!!

  *********FAIL*********

  Combination 128-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388563 (1.00x) (-43)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388584 (512.00x) (8372201) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388584/31 (262143.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 100.000% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 224.713677 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Sanity Tests ]]]

  Verification value 0xC4271A7A ....... SKIP (self- or unseeded)
  Running sanity check 1     .......... PASS
  Running AppendedZeroesTest .......... PASS


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 47.356860 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Seed' Tests ]]]

  Keyset 'Seed' - 5000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       5820.8, actual   2945 (0.51x)
  Testing collisions (high 26-40 bits) - Worst is 39 bits: 30/45 (0.66x)
  Testing collisions (high 12-bit) - Expected    5000000.0, actual 4995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    5000000.0, actual 4999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       5820.8, actual   2860 (0.49x)
  Testing collisions (low  26-40 bits) - Worst is 39 bits: 33/45 (0.73x)
  Testing collisions (low  12-bit) - Expected    5000000.0, actual 4995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    5000000.0, actual 4999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 10 - 0.059%



  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 12.370236 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Sparse' Tests ]]]

  Keyset 'Sparse' - 16-bit keys with up to 9 bits set - 50643 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected          0.6, actual      1 (1.67x) (1)
  Testing collisions (high 19-26 bits) - Worst is 26 bits: 22/38 (0.58x)
  Testing collisions (high 12-bit) - Expected      50643.0, actual  46547 (0.92x)
  Testing collisions (high  8-bit) - Expected      50643.0, actual  50387 (0.99x) (-256)
  Testing collisions (low  32-bit) - Expected          0.6, actual      0 (0.00x)
  Testing collisions (low  19-26 bits) - Worst is 26 bits: 20/38 (0.52x)
  Testing collisions (low  12-bit) - Expected      50643.0, actual  46547 (0.92x)
  Testing collisions (low   8-bit) - Expected      50643.0, actual  50387 (0.99x) (-256)
  Testing distribution - Worst bias is the 13-bit window at bit 25 - 0.478%

  Keyset 'Sparse' - 24-bit keys with up to 8 bits set - 1271626 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        376.5, actual    190 (0.50x)
  Testing collisions (high 24-36 bits) - Worst is 36 bits: 16/23 (0.68x)
  Testing collisions (high 12-bit) - Expected    1271626.0, actual 1267530 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1271626.0, actual 1271370 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        376.5, actual    205 (0.54x)
  Testing collisions (low  24-36 bits) - Worst is 32 bits: 205/376 (0.54x)
  Testing collisions (low  12-bit) - Expected    1271626.0, actual 1267530 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1271626.0, actual 1271370 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 47 - 0.080%

  Keyset 'Sparse' - 32-bit keys with up to 7 bits set - 4514873 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4746.0, actual   2300 (0.48x)
  Testing collisions (high 26-39 bits) - Worst is 38 bits: 38/74 (0.51x)
  Testing collisions (high 12-bit) - Expected    4514873.0, actual 4510777 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4514873.0, actual 4514617 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4746.0, actual   2381 (0.50x)
  Testing collisions (low  26-39 bits) - Worst is 38 bits: 41/74 (0.55x)
  Testing collisions (low  12-bit) - Expected    4514873.0, actual 4510777 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4514873.0, actual 4514617 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  7 - 0.047%

  Keyset 'Sparse' - 40-bit keys with up to 6 bits set - 4598479 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4923.4, actual   2476 (0.50x)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 22/38 (0.57x)
  Testing collisions (high 12-bit) - Expected    4598479.0, actual 4594383 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4598479.0, actual 4598223 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4923.4, actual   2508 (0.51x)
  Testing collisions (low  26-39 bits) - Worst is 35 bits: 319/615 (0.52x)
  Testing collisions (low  12-bit) - Expected    4598479.0, actual 4594383 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4598479.0, actual 4598223 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 33 - 0.059%

  Keyset 'Sparse' - 48-bit keys with up to 6 bits set - 14196869 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      46927.3, actual  23273 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 39 bits: 199/366 (0.54x)
  Testing collisions (high 12-bit) - Expected   14196869.0, actual 14192773 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14196869.0, actual 14196613 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      46927.3, actual  23368 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 15/22 (0.65x)
  Testing collisions (low  12-bit) - Expected   14196869.0, actual 14192773 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14196869.0, actual 14196613 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 32 - 0.017%

  Keyset 'Sparse' - 56-bit keys with up to 5 bits set - 4216423 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4139.3, actual   2145 (0.52x)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 17/32 (0.53x)
  Testing collisions (high 12-bit) - Expected    4216423.0, actual 4212327 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4216423.0, actual 4216167 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4139.3, actual   2083 (0.50x)
  Testing collisions (low  26-39 bits) - Worst is 38 bits: 39/64 (0.60x)
  Testing collisions (low  12-bit) - Expected    4216423.0, actual 4212327 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4216423.0, actual 4216167 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 45 - 0.042%

  Keyset 'Sparse' - 64-bit keys with up to 5 bits set - 8303633 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      16053.7, actual   8161 (0.51x)
  Testing collisions (high 27-41 bits) - Worst is 38 bits: 143/250 (0.57x)
  Testing collisions (high 12-bit) - Expected    8303633.0, actual 8299537 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    8303633.0, actual 8303377 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16053.7, actual   8070 (0.50x)
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 19/31 (0.61x)
  Testing collisions (low  12-bit) - Expected    8303633.0, actual 8299537 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    8303633.0, actual 8303377 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 19 - 0.035%

  Keyset 'Sparse' - 72-bit keys with up to 5 bits set - 15082603 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      52965.5, actual  26689 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 43 bits: 18/25 (0.70x)
  Testing collisions (high 12-bit) - Expected   15082603.0, actual 15078507 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   15082603.0, actual 15082347 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      52965.5, actual  26681 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 39 bits: 227/413 (0.55x)
  Testing collisions (low  12-bit) - Expected   15082603.0, actual 15078507 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   15082603.0, actual 15082347 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 60 - 0.028%

  Keyset 'Sparse' - 96-bit keys with up to 4 bits set - 3469497 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       2802.7, actual   1362 (0.49x)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 13/21 (0.59x)
  Testing collisions (high 12-bit) - Expected    3469497.0, actual 3465401 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    3469497.0, actual 3469241 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       2802.7, actual   1404 (0.50x)
  Testing collisions (low  26-39 bits) - Worst is 36 bits: 93/175 (0.53x)
  Testing collisions (low  12-bit) - Expected    3469497.0, actual 3465401 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    3469497.0, actual 3469241 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 43 - 0.093%

  Keyset 'Sparse' - 160-bit keys with up to 4 bits set - 26977161 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected     169446.5, actual  84471 (0.50x)
  Testing collisions (high 29-45 bits) - Worst is 44 bits: 25/41 (0.60x)
  Testing collisions (high 12-bit) - Expected   26977161.0, actual 26973065 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   26977161.0, actual 26976905 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     169446.5, actual  84746 (0.50x)
  Testing collisions (low  29-45 bits) - Worst is 45 bits: 16/20 (0.77x)
  Testing collisions (low  12-bit) - Expected   26977161.0, actual 26973065 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   26977161.0, actual 26976905 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 11 - 0.013%

  Keyset 'Sparse' - 256-bit keys with up to 3 bits set - 2796417 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1820.7, actual   2429 (1.33x) (609)
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 412/28 (14.48x) !!!!!
  Testing collisions (high 12-bit) - Expected    2796417.0, actual 2792321 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2796417.0, actual 2796161 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1820.7, actual 924895 (507.98x) (923075) !!!!!
  Testing collisions (low  25-38 bits) - Worst is 38 bits: 727603/28 (25575.88x) !!!!!
  Testing collisions (low  12-bit) - Expected    2796417.0, actual 2792321 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2796417.0, actual 2796161 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 95.691% !!!!!

  Keyset 'Sparse' - 512-bit keys with up to 3 bits set - 22370049 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 19573632 (721534813160.98x) !!!!!
  Testing collisions (high 32-bit) - Expected     116512.9, actual 19576094 (168.02x) (19459582) !!!!!
  Testing collisions (high 28-44 bits) - Worst is 44 bits: 19573680/28 (688110.91x) !!!!!
  Testing collisions (high 12-bit) - Expected   22370049.0, actual 22365953 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   22370049.0, actual 22369793 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     116512.9, actual 20498097 (175.93x) (20381585) !!!!!
  Testing collisions (low  28-44 bits) - Worst is 44 bits: 20121045/28 (707353.47x) !!!!!
  Testing collisions (low  12-bit) - Expected   22370049.0, actual 22365953 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   22370049.0, actual 22369793 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 97.697% !!!!!

  Keyset 'Sparse' - 1024-bit keys with up to 2 bits set - 524801 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 491904 (32946675339221.87x) !!!!!
  Testing collisions (high 32-bit) - Expected         64.1, actual 491909 (7671.07x) (491845) !!!!!
  Testing collisions (high 23-33 bits) - Worst is 33 bits: 491907/32 (15342.08x) !!!!!
  Testing collisions (high 12-bit) - Expected     524801.0, actual 520706 (0.99x) (-4095)
  Testing collisions (high  8-bit) - Expected     524801.0, actual 524545 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected         64.1, actual 499609 (7791.15x) (499545) !!!!!
  Testing collisions (low  23-33 bits) - Worst is 33 bits: 499383/32 (15575.25x) !!!!!
  Testing collisions (low  12-bit) - Expected     524801.0, actual 520726 (0.99x) (-4075)
  Testing collisions (low   8-bit) - Expected     524801.0, actual 524545 (1.00x) (-256)
  Testing distribution - Worst bias is the 16-bit window at bit  0 - 99.125% !!!!!

  Keyset 'Sparse' - 2048-bit keys with up to 2 bits set - 2098177 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 2065280 (8653954845535.40x) !!!!!
  Testing collisions (high 32-bit) - Expected       1025.0, actual 2065288 (2014.91x) (2064263) !!!!!
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 2065283/32 (64477.08x) !!!!!
  Testing collisions (high 12-bit) - Expected    2098177.0, actual 2094083 (1.00x) (-4094)
  Testing collisions (high  8-bit) - Expected    2098177.0, actual 2097921 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1025.0, actual 2072980 (2022.42x) (2071955) !!!!!
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 2071366/32 (64666.99x) !!!!!
  Testing collisions (low  12-bit) - Expected    2098177.0, actual 2094101 (1.00x) (-4076)
  Testing collisions (low   8-bit) - Expected    2098177.0, actual 2097921 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit  0 - 99.631% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 190.803842 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Speed Tests ]]]

  Bulk speed test - 262144-byte keys
  Alignment  7 -  2.157 bytes/cycle - 6172.18 MiB/sec @ 3 ghz
  Alignment  6 -  2.156 bytes/cycle - 6168.71 MiB/sec @ 3 ghz
  Alignment  5 -  2.157 bytes/cycle - 6170.98 MiB/sec @ 3 ghz
  Alignment  4 -  2.157 bytes/cycle - 6172.46 MiB/sec @ 3 ghz
  Alignment  3 -  2.158 bytes/cycle - 6173.97 MiB/sec @ 3 ghz
  Alignment  2 -  2.158 bytes/cycle - 6175.22 MiB/sec @ 3 ghz
  Alignment  1 -  2.158 bytes/cycle - 6174.34 MiB/sec @ 3 ghz
  Alignment  0 -  2.178 bytes/cycle - 6230.61 MiB/sec @ 3 ghz
  Average      -  2.160 bytes/cycle - 6179.81 MiB/sec @ 3 ghz

  Small key speed test -    1-byte keys -  1432.68 cycles/hash
  Small key speed test -    2-byte keys -  1435.20 cycles/hash
  Small key speed test -    3-byte keys -  1439.96 cycles/hash
  Small key speed test -    4-byte keys -  1450.36 cycles/hash
  Small key speed test -    5-byte keys -  1462.33 cycles/hash
  Small key speed test -    6-byte keys -  1476.07 cycles/hash
  Small key speed test -    7-byte keys -  1489.51 cycles/hash
  Small key speed test -    8-byte keys -  1429.25 cycles/hash
  Small key speed test -    9-byte keys -  1433.48 cycles/hash
  Small key speed test -   10-byte keys -  1437.72 cycles/hash
  Small key speed test -   11-byte keys -  1445.78 cycles/hash
  Small key speed test -   12-byte keys -  1457.66 cycles/hash
  Small key speed test -   13-byte keys -  1469.08 cycles/hash
  Small key speed test -   14-byte keys -  1481.49 cycles/hash
  Small key speed test -   15-byte keys -  1493.87 cycles/hash
  Small key speed test -   16-byte keys -  1433.29 cycles/hash
  Small key speed test -   17-byte keys -  1440.31 cycles/hash
  Small key speed test -   18-byte keys -  1182.45 cycles/hash
  Small key speed test -   19-byte keys -  1191.00 cycles/hash
  Small key speed test -   20-byte keys -  1194.27 cycles/hash
  Small key speed test -   21-byte keys -  1196.00 cycles/hash
  Small key speed test -   22-byte keys -  1198.92 cycles/hash
  Small key speed test -   23-byte keys -  1200.98 cycles/hash
  Small key speed test -   24-byte keys -  1163.79 cycles/hash
  Small key speed test -   25-byte keys -  1180.56 cycles/hash
  Small key speed test -   26-byte keys -  1189.43 cycles/hash
  Small key speed test -   27-byte keys -  1191.66 cycles/hash
  Small key speed test -   28-byte keys -  1193.92 cycles/hash
  Small key speed test -   29-byte keys -  1196.30 cycles/hash
  Small key speed test -   30-byte keys -  1198.21 cycles/hash
  Small key speed test -   31-byte keys -  1201.11 cycles/hash
  Average                                    1335.052 cycles/hash


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 315.401509 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Text' Tests ]]]

  Keyset 'Text' - keys of form "Foo[XXXX]Bar" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25681 (0.51x)
  Testing collisions (high 28-43 bits) - Worst is 39 bits: 207/397 (0.52x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual  25468 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 22/24 (0.89x)
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 34 - 0.029%

  Keyset 'Text' - keys of form "FooBar[XXXX]" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25409 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 37 bits: 817/1588 (0.51x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual  25223 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 38 bits: 427/794 (0.54x)
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 57 - 0.020%

  Keyset 'Text' - keys of form "[XXXX]FooBar" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25726 (0.51x)
  Testing collisions (high 28-43 bits) - Worst is 41 bits: 59/99 (0.59x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual  25344 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 42 bits: 31/49 (0.62x)
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 10 - 0.022%



  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 80.317314 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'TwoBytes' Tests ]]]

  Keyset 'TwoBytes' - up-to-4-byte keys, 652545 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual   1275 (55234399929.36x) !!!!!
  Testing collisions (high 32-bit) - Expected         99.1, actual   1323 (13.34x) (1224) !!!!!
  Testing collisions (high 23-34 bits) - Worst is 34 bits: 1287/24 (51.93x) !!!!!
  Testing collisions (high 12-bit) - Expected     652545.0, actual 648449 (0.99x) (-4096)
  Testing collisions (high  8-bit) - Expected     652545.0, actual 652289 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected         99.1, actual   1320 (13.31x) (1221) !!!!!
  Testing collisions (low  23-34 bits) - Worst is 34 bits: 1288/24 (51.97x) !!!!!
  Testing collisions (low  12-bit) - Expected     652545.0, actual 648449 (0.99x) (-4096)
  Testing collisions (low   8-bit) - Expected     652545.0, actual 652289 (1.00x) (-256)
  Testing distribution - Worst bias is the 16-bit window at bit 43 - 0.172%

  Keyset 'TwoBytes' - up-to-8-byte keys, 5471025 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual  56889 (35059902421.79x) !!!!!
  Testing collisions (high 32-bit) - Expected       6969.1, actual  60361 (8.66x) (53392) !!!!!
  Testing collisions (high 26-40 bits) - Worst is 40 bits: 56906/27 (2090.36x) !!!!!
  Testing collisions (high 12-bit) - Expected    5471025.0, actual 5466929 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    5471025.0, actual 5470769 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       6969.1, actual  60300 (8.65x) (53331) !!!!!
  Testing collisions (low  26-40 bits) - Worst is 40 bits: 56897/27 (2090.03x) !!!!!
  Testing collisions (low  12-bit) - Expected    5471025.0, actual 5466929 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    5471025.0, actual 5470769 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 52 - 0.434%

  Keyset 'TwoBytes' - up-to-12-byte keys, 18616785 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual  66580 (3543677329.19x) !!!!!
  Testing collisions (high 32-bit) - Expected      80695.5, actual 106863 (1.32x) (26168)
  Testing collisions (high 28-43 bits) - Worst is 43 bits: 66607/39 (1690.44x) !!!!!
  Testing collisions (high 12-bit) - Expected   18616785.0, actual 18612689 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   18616785.0, actual 18616529 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      80695.5, actual 106471 (1.32x) (25776)
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 66596/39 (1690.16x) !!!!!
  Testing collisions (low  12-bit) - Expected   18616785.0, actual 18612689 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   18616785.0, actual 18616529 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 29 - 0.057%

  Keyset 'TwoBytes' - up-to-16-byte keys, 44251425 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 401893 (3785956791.16x) !!!!!
  Testing collisions (high 32-bit) - Expected     455926.3, actual 625312 (1.37x) (169386)
  Testing collisions (high 29-46 bits) - Worst is 46 bits: 401903/27 (14442.64x) !!!!!
  Testing collisions (high 12-bit) - Expected   44251425.0, actual 44247329 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   44251425.0, actual 44251169 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     455926.3, actual 631832 (1.39x) (175906)
  Testing collisions (low  29-46 bits) - Worst is 46 bits: 402080/27 (14449.00x) !!!!!
  Testing collisions (low  12-bit) - Expected   44251425.0, actual 44247329 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   44251425.0, actual 44251169 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 61 - 0.052%

  Keyset 'TwoBytes' - up-to-20-byte keys, 86536545 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 419744 (1033963292.12x) !!!!!
  Testing collisions (high 32-bit) - Expected    1743569.4, actual 1277661 (0.73x)
  Testing collisions (high 30-48 bits) - Worst is 48 bits: 419762/26 (15777.70x) !!!!!
  Testing collisions (high 12-bit) - Expected   86536545.0, actual 86532449 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   86536545.0, actual 86536289 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected    1743569.4, actual 1302708 (0.75x)
  Testing collisions (low  30-48 bits) - Worst is 48 bits: 420521/26 (15806.23x) !!!!!
  Testing collisions (low  12-bit) - Expected   86536545.0, actual 86532449 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   86536545.0, actual 86536289 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 0.019%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 297.188900 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Window' Tests ]]]

  Keyset 'Window' -  32-bit key,  25-bit window - 32 tests, 33554432 keys per test
  Window at   0 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   1 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   2 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   3 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   4 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   5 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   6 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   7 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   8 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   9 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  10 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  11 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  12 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  13 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  14 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  15 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  16 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  17 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  18 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  19 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  20 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  21 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  22 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  23 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  24 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  25 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  26 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  27 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  28 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  29 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  30 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  31 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  32 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 561.517083 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Zeroes' Tests ]]]

  Keyset 'Zeroes' - 204800 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual    802 (352725052480.84x) !!!!!
  Testing collisions (high 32-bit) - Expected          9.8, actual    816 (83.56x) (807) !!!!!
  Testing collisions (high 21-30 bits) - Worst is 30 bits: 828/39 (21.20x) !!!!!
  Testing collisions (high 12-bit) - Expected     204800.0, actual 200704 (0.98x)
  Testing collisions (high  8-bit) - Expected     204800.0, actual 204544 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected          9.8, actual  20004 (2048.42x) (19995) !!!!!
  Testing collisions (low  21-30 bits) - Worst is 30 bits: 20098/39 (514.51x) !!!!!
  Testing collisions (low  12-bit) - Expected     204800.0, actual 200704 (0.98x)
  Testing collisions (low   8-bit) - Expected     204800.0, actual 204544 (1.00x) (-256)
  Testing distribution - Worst bias is the 15-bit window at bit  1 - 12.928% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 3.185341 seconds
```

Using the original (old) S-boxes:

207 bad lines (23 fails)

```
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Avalanche Tests ]]]

  Testing   24-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.600000%
  Testing   32-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.666667%
  Testing   40-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.636000%
  Testing   48-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.597333%
  Testing   56-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.642000%
  Testing   64-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.660667%
  Testing   72-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.650667%
  Testing   80-bit keys ->  64-bit hashes, 300000 reps worst bias is 0.670000%
  Testing   96-bit keys ->  64-bit hashes, 300000 reps worst bias is 1.214667% !!!!!
  Testing  112-bit keys ->  64-bit hashes, 300000 reps worst bias is 1.984667% !!!!!
  Testing  128-bit keys ->  64-bit hashes, 300000 reps worst bias is 2.486667% !!!!!
  Testing  160-bit keys ->  64-bit hashes, 300000 reps worst bias is 2.549333% !!!!!
  Testing  512-bit keys ->  64-bit hashes, 300000 reps worst bias is 100.000000% !!!!!
  Testing 1024-bit keys ->  64-bit hashes, 300000 reps worst bias is 100.000000% !!!!!
  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 363.424305 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ BIC 'Bit Independence Criteria' Tests ]]]

  ...........
  Max bias 0.017152 - ( 81 :  10, 12)


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 234.725141 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Cyclic' Tests ]]]

  Keyset 'Cyclic' - 8 cycles of 8 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    107 (0.46x)
  Testing collisions (high 24-35 bits) - Worst is 27 bits: 3723/7450 (0.50x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    104 (0.45x)
  Testing collisions (low  24-35 bits) - Worst is 30 bits: 475/931 (0.51x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 31 - 0.095%

  Keyset 'Cyclic' - 8 cycles of 9 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    114 (0.49x)
  Testing collisions (high 24-35 bits) - Worst is 35 bits: 20/29 (0.69x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    121 (0.52x)
  Testing collisions (low  24-35 bits) - Worst is 32 bits: 121/232 (0.52x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 15 - 0.099%

  Keyset 'Cyclic' - 8 cycles of 10 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    120 (0.52x)
  Testing collisions (high 24-35 bits) - Worst is 30 bits: 491/931 (0.53x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    133 (0.57x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 17/29 (0.58x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 60 - 0.091%

  Keyset 'Cyclic' - 8 cycles of 11 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    125 (0.54x)
  Testing collisions (high 24-35 bits) - Worst is 32 bits: 125/232 (0.54x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    110 (0.47x)
  Testing collisions (low  24-35 bits) - Worst is 29 bits: 957/1862 (0.51x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit  3 - 0.166%

  Keyset 'Cyclic' - 8 cycles of 12 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual     74 (1365060426.51x) !!!!!
  Testing collisions (high 32-bit) - Expected        232.8, actual    191 (0.82x)
  Testing collisions (high 24-35 bits) - Worst is 35 bits: 86/29 (2.95x) !!!!!
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    190 (0.82x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 91/29 (3.13x) !!!!!
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 14 - 0.158%

  Keyset 'Cyclic' - 8 cycles of 16 bytes - 1000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        232.8, actual    113 (0.49x)
  Testing collisions (high 24-35 bits) - Worst is 26 bits: 7445/14901 (0.50x)
  Testing collisions (high 12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        232.8, actual    113 (0.49x)
  Testing collisions (low  24-35 bits) - Worst is 35 bits: 16/29 (0.55x)
  Testing collisions (low  12-bit) - Expected    1000000.0, actual 995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1000000.0, actual 999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 21 - 0.086%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 13.125203 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Diff 'Differential' Tests ]]]

  Testing 8303632 up-to-5-bit differentials in 64-bit keys -> 64 bit hashes.
  1000 reps, 8303632000 total tests, expecting 0.00 random collisions..........
  0 total collisions, of which 0 single collisions were ignored

  Testing 11017632 up-to-4-bit differentials in 128-bit keys -> 64 bit hashes.
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ DiffDist 'Differential Distribution' Tests ]]]

  Testing bit 0
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    486 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 26 bits: 32534/65535 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    503 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 28 bits: 8267/16383 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 1
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    469 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    493 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 38/63 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 2
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    503 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 265/511 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 26/31 (0.81x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 3
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    486 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 4
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    498 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8293/16383 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 5
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    525 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    514 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 6
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    544 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 544/1023 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    537 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 7
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    483 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8181/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    544 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 544/1023 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 8
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    527 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 24/31 (0.75x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    509 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1058/2047 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 9
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    511 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2050/4095 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 31 bits: 1059/2047 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 10
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 270/511 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    513 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 22/31 (0.69x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 11
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    533 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 76/127 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    476 (0.46x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 17/31 (0.53x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 12
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    524 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 20/31 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    556 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 26/31 (0.81x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 13
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    530 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 76/127 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 14
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    534 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    505 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 37/63 (0.58x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 15
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    509 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 134/255 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    515 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 138/255 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 16
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    501 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2080/4095 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    497 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 40/63 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 17
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1015/2047 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    535 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 18
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    524 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    465 (0.45x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 65/127 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 19
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    458 (0.45x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8270/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    553 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 553/1023 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 20
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    529 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 77/127 (0.60x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    541 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 145/255 (0.57x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 21
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    535 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 157/255 (0.61x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    502 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 265/511 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 22
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    489 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 25/31 (0.78x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    534 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 139/255 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 23
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    457 (0.45x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8183/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    494 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 63/127 (0.49x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 24
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    522 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 522/1023 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    587 (0.57x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 152/255 (0.59x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 25
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    530 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 40/63 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    532 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 284/511 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 26
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    551 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 72/127 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    527 (0.51x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 21/31 (0.66x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 27
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    553 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 139/255 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    546 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 138/255 (0.54x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 28
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    538 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 280/511 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 29
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    528 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    537 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 31/31 (0.97x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 30
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    489 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 70/127 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    554 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 36 bits: 46/63 (0.72x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 31
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    549 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 81/127 (0.63x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    551 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 72/127 (0.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 32
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    507 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 31 bits: 1038/2047 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    580 (0.57x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 87/31 (2.72x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 33
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    540 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 143/255 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    623 (0.61x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 82/31 (2.56x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 34
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    541 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 25/31 (0.78x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    635 (0.62x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 93/31 (2.91x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 35
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    549 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 549/1023 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    653 (0.64x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 99/31 (3.09x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 36
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    523 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 136/255 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    645 (0.63x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 92/31 (2.88x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 37
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 34/63 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    640 (0.63x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 73/31 (2.28x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 38
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    468 (0.46x)
  Testing collisions (high 25-37 bits) - Worst is 28 bits: 8167/16383 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    674 (0.66x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 96/31 (3.00x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 39
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 280/511 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    689 (0.67x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 96/31 (3.00x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 40
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    504 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 36/63 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    592 (0.58x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 102/31 (3.19x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 41
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 19/31 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    556 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 69/31 (2.16x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 42
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    524 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 41/63 (0.64x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    647 (0.63x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 112/31 (3.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 43
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    514 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 275/511 (0.54x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    620 (0.61x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 100/31 (3.13x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 44
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    500 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    590 (0.58x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 88/31 (2.75x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 45
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    531 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 41/63 (0.64x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    578 (0.56x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 99/31 (3.09x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 46
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    521 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    615 (0.60x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 97/31 (3.03x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 47
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    501 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 27/31 (0.84x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    627 (0.61x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 111/31 (3.47x) !!!!!
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 48
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    537 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 36 bits: 35/63 (0.55x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 38/31 (1.19x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 49
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    581 (0.57x)
  Testing collisions (high 25-37 bits) - Worst is 33 bits: 298/511 (0.58x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    594 (0.58x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 50/31 (1.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 50
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    519 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 519/1023 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    540 (0.53x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 36/31 (1.13x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 51
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    477 (0.47x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 22/31 (0.69x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    558 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 44/31 (1.38x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 52
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    551 (0.54x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 153/255 (0.60x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    532 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 40/31 (1.25x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 53
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    520 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 66/127 (0.52x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    567 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 39/31 (1.22x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 54
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    517 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    548 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 50/31 (1.56x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 55
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    512 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 30 bits: 2070/4095 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    548 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 39/31 (1.22x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 56
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    506 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 129/255 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    494 (0.48x)
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 23/31 (0.72x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 57
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    524 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 524/1023 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    529 (0.52x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 529/1023 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 58
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    537 (0.52x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 25/31 (0.78x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    498 (0.49x)
  Testing collisions (low  25-37 bits) - Worst is 34 bits: 133/255 (0.52x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 59
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    523 (0.51x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 523/1023 (0.51x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    459 (0.45x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 65/127 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 60
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    543 (0.53x)
  Testing collisions (high 25-37 bits) - Worst is 35 bits: 75/127 (0.59x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    516 (0.50x)
  Testing collisions (low  25-37 bits) - Worst is 32 bits: 516/1023 (0.50x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 61
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    517 (0.50x)
  Testing collisions (high 25-37 bits) - Worst is 32 bits: 517/1023 (0.50x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    549 (0.54x)
  Testing collisions (low  25-37 bits) - Worst is 35 bits: 80/127 (0.63x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 62
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    497 (0.49x)
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 18/31 (0.56x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    561 (0.55x)
  Testing collisions (low  25-37 bits) - Worst is 33 bits: 284/511 (0.55x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  Testing bit 63
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1024.0, actual    496 (0.48x)
  Testing collisions (high 25-37 bits) - Worst is 34 bits: 135/255 (0.53x)
  Testing collisions (high 12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1024.0, actual    483 (0.47x)
  Testing collisions (low  25-37 bits) - Worst is 28 bits: 8274/16383 (0.51x)
  Testing collisions (low  12-bit) - Expected    2097152.0, actual 2093056 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2097152.0, actual 2096896 (1.00x) (-256)

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 96.791393 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ 'Hashmap' Speed Tests ]]]

  Unable to open words dict file /usr/share/dict/words
  std::unordered_map
  Init std HashMapTest:     inf cycles/op (0 inserts, 1% deletions)
  Running std HashMapTest:  SKIP ....... FAIL


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 0.000410 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ MomentChi2 Tests ]]]

  Running 1st unseeded MomentChi2 for the low 32bits/step 3 ... 38918668.878309 - 410439.678304
  Running 2nd   seeded MomentChi2 for the low 32bits/step 3 ... 38917705.685353 - 410459.359139
  KeySeedMomentChi2:	1.13015	PASS


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 582.768399 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Permutation' Tests ]]]

  Combination Lowbits Tests:
  Keyset 'Combination' - up to 7 blocks from a set of 8 - 2396744 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1337.5, actual 107157 (80.12x) (105820) !!!!!
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 57375/20 (2745.49x) !!!!!
  Testing collisions (high 12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1337.5, actual 145235 (108.59x) (143898) !!!!!
  Testing collisions (low  25-38 bits) - Worst is 34 bits: 37180/334 (111.20x) !!!!!
  Testing collisions (low  12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit 14 - 4.216% !!!!!

  *********FAIL*********

  Combination Highbits Tests
  Keyset 'Combination' - up to 7 blocks from a set of 8 - 2396744 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       1337.5, actual   6679 (4.99x) (5342) !!!!!
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 743/20 (35.55x) !!!!!
  Testing collisions (high 12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1337.5, actual  35293 (26.39x) (33956) !!!!!
  Testing collisions (low  25-38 bits) - Worst is 30 bits: 226813/5349 (42.40x) !!!!!
  Testing collisions (low  12-bit) - Expected    2396744.0, actual 2392648 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2396744.0, actual 2396488 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit  6 - 61.191% !!!!!

  *********FAIL*********

  Combination Hi-Lo Tests:
  Keyset 'Combination' - up to 6 blocks from a set of 15 - 12204240 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      34678.6, actual  20582 (0.59x)
  Testing collisions (high 27-42 bits) - Worst is 42 bits: 1730/33 (51.08x) !!!!!
  Testing collisions (high 12-bit) - Expected   12204240.0, actual 12200144 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   12204240.0, actual 12203984 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      34678.6, actual 819580 (23.63x) (784902) !!!!!
  Testing collisions (low  27-42 bits) - Worst is 35 bits: 109768/4334 (25.32x) !!!!!
  Testing collisions (low  12-bit) - Expected   12204240.0, actual 12200144 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   12204240.0, actual 12203984 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  4 - 10.299% !!!!!

  *********FAIL*********

  Combination 0x8000000 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8367568 (2193509053225.09x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8367568 (510.72x) (8351185) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8367568/31 (261486.66x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384531 (1.00x) (-4075)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8380988 (511.54x) (8364605) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8377960/31 (261811.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8386112 (1.00x) (-2494)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  2 - 99.926% !!!!!

  *********FAIL*********

  Combination 0x0000001 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8247841 (2162123319829.74x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8248007 (503.42x) (8231624) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8247841/31 (257745.18x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384510 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8339806 (509.02x) (8323423) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8247845/31 (257745.31x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384510 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 10 - 99.245% !!!!!

  *********FAIL*********

  Combination 0x800000000000000 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388288 (2198940680142.59x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388288 (511.98x) (8371905) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388288/31 (262134.16x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388298 (1.00x) (-308)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388420 (1.00x) (-186)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388440 (511.99x) (8372057) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388440/31 (262138.91x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388441 (1.00x) (-165)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388478 (1.00x) (-128)
  Testing distribution - Worst bias is the 20-bit window at bit  8 - 99.998% !!!!!

  *********FAIL*********

  Combination 0x000000000000001 Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8378534 (2196383726042.53x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8378965 (511.41x) (8362582) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8378686/31 (261834.09x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8384892 (1.00x) (-3714)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8378534 (511.39x) (8362151) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8378534/31 (261829.34x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8384858 (1.00x) (-3748)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388350 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 41 - 99.911% !!!!!

  *********FAIL*********

  Combination 16-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8387385 (2198703963969.50x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8387385 (511.93x) (8371002) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8387385/31 (262105.94x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8387545 (1.00x) (-1061)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388351 (1.00x) (-255)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8387385 (511.93x) (8371002) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8387385/31 (262105.94x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8387555 (1.00x) (-1051)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388352 (1.00x) (-254)
  Testing distribution - Worst bias is the 20-bit window at bit 61 - 99.990% !!!!!

  *********FAIL*********

  Combination 16-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388520 (2199001497586.84x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388520 (511.99x) (8372137) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388520/31 (262141.41x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388523 (1.00x) (-83)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388534 (1.00x) (-72)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388566 (1.00x) (-40)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.999% !!!!!

  *********FAIL*********

  Combination 32-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388340 (1.00x) (-266)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388439 (1.00x) (-167)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388338 (1.00x) (-268)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388441 (1.00x) (-165)
  Testing distribution - Worst bias is the 20-bit window at bit 21 - 99.998% !!!!!

  *********FAIL*********

  Combination 32-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388563 (1.00x) (-43)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388567 (1.00x) (-39)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388584 (512.00x) (8372201) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388584/31 (262143.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 100.000% !!!!!

  *********FAIL*********

  Combination 64-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388339 (1.00x) (-267)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388438 (1.00x) (-168)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388338 (1.00x) (-268)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388442 (1.00x) (-164)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 64-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388566 (1.00x) (-40)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388584 (512.00x) (8372201) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388584/31 (262143.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388585 (1.00x) (-21)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 100.000% !!!!!

  *********FAIL*********

  Combination 128-bytes [0-1] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388331 (2198951952341.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388335 (1.00x) (-271)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388431 (1.00x) (-175)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388331 (511.98x) (8371948) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388331/31 (262135.50x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388342 (1.00x) (-264)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388444 (1.00x) (-162)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 99.998% !!!!!

  *********FAIL*********

  Combination 128-bytes [0-last] Tests:
  Keyset 'Combination' - up to 22 blocks from a set of 2 - 8388606 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 8388562 (2199012507641.41x) !!!!!
  Testing collisions (high 32-bit) - Expected      16384.0, actual 8388562 (512.00x) (8372179) !!!!!
  Testing collisions (high 27-41 bits) - Worst is 41 bits: 8388562/31 (262142.72x) !!!!!
  Testing collisions (high 12-bit) - Expected    8388606.0, actual 8388562 (1.00x) (-44)
  Testing collisions (high  8-bit) - Expected    8388606.0, actual 8388565 (1.00x) (-41)
  Testing collisions (low  32-bit) - Expected      16384.0, actual 8388584 (512.00x) (8372201) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 8388584/31 (262143.41x) !!!!!
  Testing collisions (low  12-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing collisions (low   8-bit) - Expected    8388606.0, actual 8388584 (1.00x) (-22)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 100.000% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 150.595009 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Sanity Tests ]]]

  Verification value 0x00D926F7 ....... SKIP (self- or unseeded)
  Running sanity check 1     .......... PASS
  Running AppendedZeroesTest .......... PASS


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 26.121849 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Seed' Tests ]]]

  Keyset 'Seed' - 5000000 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       5820.8, actual   2896 (0.50x)
  Testing collisions (high 26-40 bits) - Worst is 39 bits: 30/45 (0.66x)
  Testing collisions (high 12-bit) - Expected    5000000.0, actual 4995904 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    5000000.0, actual 4999744 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       5820.8, actual   2903 (0.50x)
  Testing collisions (low  26-40 bits) - Worst is 37 bits: 114/181 (0.63x)
  Testing collisions (low  12-bit) - Expected    5000000.0, actual 4995904 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    5000000.0, actual 4999744 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit 62 - 0.052%



  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 11.159018 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Sparse' Tests ]]]

  Keyset 'Sparse' - 16-bit keys with up to 9 bits set - 50643 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected          0.6, actual      4 (6.70x) (4) !!!!!
  Testing collisions (high 19-26 bits) - Worst is 26 bits: 30/38 (0.79x)
  Testing collisions (high 12-bit) - Expected      50643.0, actual  46547 (0.92x)
  Testing collisions (high  8-bit) - Expected      50643.0, actual  50387 (0.99x) (-256)
  Testing collisions (low  32-bit) - Expected          0.6, actual      0 (0.00x)
  Testing collisions (low  19-26 bits) - Worst is 24 bits: 96/152 (0.63x)
  Testing collisions (low  12-bit) - Expected      50643.0, actual  46547 (0.92x)
  Testing collisions (low   8-bit) - Expected      50643.0, actual  50387 (0.99x) (-256)
  Testing distribution - Worst bias is the 13-bit window at bit  5 - 0.590%

  Keyset 'Sparse' - 24-bit keys with up to 8 bits set - 1271626 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected        376.5, actual   1156 (3.07x) (780) !!!!!
  Testing collisions (high 24-36 bits) - Worst is 36 bits: 238/23 (10.11x) !!!!!
  Testing collisions (high 12-bit) - Expected    1271626.0, actual 1267530 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    1271626.0, actual 1271370 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected        376.5, actual    198 (0.53x)
  Testing collisions (low  24-36 bits) - Worst is 35 bits: 29/47 (0.62x)
  Testing collisions (low  12-bit) - Expected    1271626.0, actual 1267530 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    1271626.0, actual 1271370 (1.00x) (-256)
  Testing distribution - Worst bias is the 17-bit window at bit 39 - 0.106%

  Keyset 'Sparse' - 32-bit keys with up to 7 bits set - 4514873 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4746.0, actual   5076 (1.07x) (330)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 129/37 (3.48x) !!!!!
  Testing collisions (high 12-bit) - Expected    4514873.0, actual 4510777 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4514873.0, actual 4514617 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4746.0, actual   2397 (0.51x)
  Testing collisions (low  26-39 bits) - Worst is 39 bits: 26/37 (0.70x)
  Testing collisions (low  12-bit) - Expected    4514873.0, actual 4510777 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4514873.0, actual 4514617 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit 62 - 0.336%

  Keyset 'Sparse' - 40-bit keys with up to 6 bits set - 4598479 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4923.4, actual   2815 (0.57x)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 46/38 (1.20x)
  Testing collisions (high 12-bit) - Expected    4598479.0, actual 4594383 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4598479.0, actual 4598223 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4923.4, actual   5300 (1.08x) (377)
  Testing collisions (low  26-39 bits) - Worst is 39 bits: 42/38 (1.09x)
  Testing collisions (low  12-bit) - Expected    4598479.0, actual 4594383 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4598479.0, actual 4598223 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 2.283% !!!!!

  Keyset 'Sparse' - 48-bit keys with up to 6 bits set - 14196869 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      46927.3, actual  23697 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 40 bits: 118/183 (0.64x)
  Testing collisions (high 12-bit) - Expected   14196869.0, actual 14192773 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14196869.0, actual 14196613 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      46927.3, actual 218263 (4.65x) (171336) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 40 bits: 5381/183 (29.35x) !!!!!
  Testing collisions (low  12-bit) - Expected   14196869.0, actual 14192773 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14196869.0, actual 14196613 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 7.434% !!!!!

  Keyset 'Sparse' - 56-bit keys with up to 5 bits set - 4216423 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       4139.3, actual   2051 (0.50x)
  Testing collisions (high 26-39 bits) - Worst is 36 bits: 136/258 (0.53x)
  Testing collisions (high 12-bit) - Expected    4216423.0, actual 4212327 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    4216423.0, actual 4216167 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       4139.3, actual 151446 (36.59x) (147307) !!!!!
  Testing collisions (low  26-39 bits) - Worst is 39 bits: 14030/32 (433.85x) !!!!!
  Testing collisions (low  12-bit) - Expected    4216423.0, actual 4212327 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    4216423.0, actual 4216167 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 15.085% !!!!!

  Keyset 'Sparse' - 64-bit keys with up to 5 bits set - 8303633 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      1 (267536.77x) !!!!!
  Testing collisions (high 32-bit) - Expected      16053.7, actual   8005 (0.50x)
  Testing collisions (high 27-41 bits) - Worst is 40 bits: 43/62 (0.69x)
  Testing collisions (high 12-bit) - Expected    8303633.0, actual 8299537 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    8303633.0, actual 8303377 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      16053.7, actual 701634 (43.71x) (685581) !!!!!
  Testing collisions (low  27-41 bits) - Worst is 41 bits: 62937/31 (2007.24x) !!!!!
  Testing collisions (low  12-bit) - Expected    8303633.0, actual 8299537 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    8303633.0, actual 8303377 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 22.012% !!!!!

  Keyset 'Sparse' - 72-bit keys with up to 5 bits set - 15082603 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      52965.5, actual  26530 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 43 bits: 22/25 (0.85x)
  Testing collisions (high 12-bit) - Expected   15082603.0, actual 15078507 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   15082603.0, actual 15082347 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      52965.5, actual 897053 (16.94x) (844088) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 30133/25 (1165.14x) !!!!!
  Testing collisions (low  12-bit) - Expected   15082603.0, actual 15078507 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   15082603.0, actual 15082347 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 8.820% !!!!!

  Keyset 'Sparse' - 96-bit keys with up to 4 bits set - 3469497 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected       2802.7, actual   1729 (0.62x)
  Testing collisions (high 26-39 bits) - Worst is 39 bits: 166/21 (7.58x) !!!!!
  Testing collisions (high 12-bit) - Expected    3469497.0, actual 3465401 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    3469497.0, actual 3469241 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       2802.7, actual  37234 (13.29x) (34432) !!!!!
  Testing collisions (low  26-39 bits) - Worst is 39 bits: 6774/21 (309.37x) !!!!!
  Testing collisions (low  12-bit) - Expected    3469497.0, actual 3465401 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    3469497.0, actual 3469241 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 10.203% !!!!!

  Keyset 'Sparse' - 160-bit keys with up to 4 bits set - 26977161 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual     12 (304164.48x) !!!!!
  Testing collisions (high 32-bit) - Expected     169446.5, actual  88012 (0.52x)
  Testing collisions (high 29-45 bits) - Worst is 45 bits: 1159/20 (56.03x) !!!!!
  Testing collisions (high 12-bit) - Expected   26977161.0, actual 26973065 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   26977161.0, actual 26976905 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     169446.5, actual 4859770 (28.68x) (4690324) !!!!!
  Testing collisions (low  29-45 bits) - Worst is 45 bits: 661910/20 (32000.46x) !!!!!
  Testing collisions (low  12-bit) - Expected   26977161.0, actual 26973065 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   26977161.0, actual 26976905 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 25.317% !!!!!

  Keyset 'Sparse' - 256-bit keys with up to 3 bits set - 2796417 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      1 (2358935.20x) !!!!!
  Testing collisions (high 32-bit) - Expected       1820.7, actual 123620 (67.90x) (121800) !!!!!
  Testing collisions (high 25-38 bits) - Worst is 38 bits: 64861/28 (2279.92x) !!!!!
  Testing collisions (high 12-bit) - Expected    2796417.0, actual 2792321 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    2796417.0, actual 2796161 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1820.7, actual 1158821 (636.46x) (1157001) !!!!!
  Testing collisions (low  25-38 bits) - Worst is 38 bits: 844178/28 (29673.59x) !!!!!
  Testing collisions (low  12-bit) - Expected    2796417.0, actual 2792321 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    2796417.0, actual 2796161 (1.00x) (-256)
  Testing distribution - Worst bias is the 19-bit window at bit  0 - 96.707% !!!!!

  Keyset 'Sparse' - 512-bit keys with up to 3 bits set - 22370049 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 19573636 (721534960611.35x) !!!!!
  Testing collisions (high 32-bit) - Expected     116512.9, actual 19752150 (169.53x) (19635638) !!!!!
  Testing collisions (high 28-44 bits) - Worst is 44 bits: 19591437/28 (688735.15x) !!!!!
  Testing collisions (high 12-bit) - Expected   22370049.0, actual 22365953 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   22370049.0, actual 22369793 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     116512.9, actual 20713709 (177.78x) (20597197) !!!!!
  Testing collisions (low  28-44 bits) - Worst is 44 bits: 20153378/28 (708490.14x) !!!!!
  Testing collisions (low  12-bit) - Expected   22370049.0, actual 22365953 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   22370049.0, actual 22369793 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 98.202% !!!!!

  Keyset 'Sparse' - 1024-bit keys with up to 2 bits set - 524801 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 491904 (32946675339221.87x) !!!!!
  Testing collisions (high 32-bit) - Expected         64.1, actual 492714 (7683.63x) (492650) !!!!!
  Testing collisions (high 23-33 bits) - Worst is 33 bits: 492601/32 (15363.73x) !!!!!
  Testing collisions (high 12-bit) - Expected     524801.0, actual 520709 (0.99x) (-4092)
  Testing collisions (high  8-bit) - Expected     524801.0, actual 524545 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected         64.1, actual 501490 (7820.48x) (501426) !!!!!
  Testing collisions (low  23-33 bits) - Worst is 33 bits: 500834/32 (15620.51x) !!!!!
  Testing collisions (low  12-bit) - Expected     524801.0, actual 520765 (0.99x) (-4036)
  Testing collisions (low   8-bit) - Expected     524801.0, actual 524545 (1.00x) (-256)
  Testing distribution - Worst bias is the 16-bit window at bit  0 - 99.288% !!!!!

  Keyset 'Sparse' - 2048-bit keys with up to 2 bits set - 2098177 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 2065280 (8653954845535.40x) !!!!!
  Testing collisions (high 32-bit) - Expected       1025.0, actual 2066088 (2015.69x) (2065063) !!!!!
  Testing collisions (high 25-37 bits) - Worst is 37 bits: 2065847/32 (64494.69x) !!!!!
  Testing collisions (high 12-bit) - Expected    2098177.0, actual 2094082 (1.00x) (-4095)
  Testing collisions (high  8-bit) - Expected    2098177.0, actual 2097921 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       1025.0, actual 2074658 (2024.06x) (2073633) !!!!!
  Testing collisions (low  25-37 bits) - Worst is 37 bits: 2072058/32 (64688.59x) !!!!!
  Testing collisions (low  12-bit) - Expected    2098177.0, actual 2094148 (1.00x) (-4029)
  Testing collisions (low   8-bit) - Expected    2098177.0, actual 2097921 (1.00x) (-256)
  Testing distribution - Worst bias is the 18-bit window at bit  0 - 99.713% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 216.148996 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Speed Tests ]]]

  Bulk speed test - 262144-byte keys
  Alignment  7 -  2.395 bytes/cycle - 6851.42 MiB/sec @ 3 ghz
  Alignment  6 -  2.403 bytes/cycle - 6874.69 MiB/sec @ 3 ghz
  Alignment  5 -  2.311 bytes/cycle - 6611.71 MiB/sec @ 3 ghz
  Alignment  4 -  2.495 bytes/cycle - 7139.38 MiB/sec @ 3 ghz
  Alignment  3 -  2.601 bytes/cycle - 7440.84 MiB/sec @ 3 ghz
  Alignment  2 -  2.600 bytes/cycle - 7439.35 MiB/sec @ 3 ghz
  Alignment  1 -  1.891 bytes/cycle - 5409.51 MiB/sec @ 3 ghz
  Alignment  0 -  2.116 bytes/cycle - 6052.84 MiB/sec @ 3 ghz
  Average      -  2.351 bytes/cycle - 6727.47 MiB/sec @ 3 ghz

  Small key speed test -    1-byte keys -   716.52 cycles/hash
  Small key speed test -    2-byte keys -   728.82 cycles/hash
  Small key speed test -    3-byte keys -   733.28 cycles/hash
  Small key speed test -    4-byte keys -   761.68 cycles/hash
  Small key speed test -    5-byte keys -   758.47 cycles/hash
  Small key speed test -    6-byte keys -   771.14 cycles/hash
  Small key speed test -    7-byte keys -   783.44 cycles/hash
  Small key speed test -    8-byte keys -   713.45 cycles/hash
  Small key speed test -    9-byte keys -   720.09 cycles/hash
  Small key speed test -   10-byte keys -   733.78 cycles/hash
  Small key speed test -   11-byte keys -   745.96 cycles/hash
  Small key speed test -   12-byte keys -   754.55 cycles/hash
  Small key speed test -   13-byte keys -   766.87 cycles/hash
  Small key speed test -   14-byte keys -   780.15 cycles/hash
  Small key speed test -   15-byte keys -   800.50 cycles/hash
  Small key speed test -   16-byte keys -   716.55 cycles/hash
  Small key speed test -   17-byte keys -   733.07 cycles/hash
  Small key speed test -   18-byte keys -   746.20 cycles/hash
  Small key speed test -   19-byte keys -   757.89 cycles/hash
  Small key speed test -   20-byte keys -   775.16 cycles/hash
  Small key speed test -   21-byte keys -   785.30 cycles/hash
  Small key speed test -   22-byte keys -   799.29 cycles/hash
  Small key speed test -   23-byte keys -   813.33 cycles/hash
  Small key speed test -   24-byte keys -   728.52 cycles/hash
  Small key speed test -   25-byte keys -   729.37 cycles/hash
  Small key speed test -   26-byte keys -   621.24 cycles/hash
  Small key speed test -   27-byte keys -   627.17 cycles/hash
  Small key speed test -   28-byte keys -   630.30 cycles/hash
  Small key speed test -   29-byte keys -   634.79 cycles/hash
  Small key speed test -   30-byte keys -   636.74 cycles/hash
  Small key speed test -   31-byte keys -   644.66 cycles/hash
  Average                                    730.590 cycles/hash


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 180.813266 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Text' Tests ]]]

  Keyset 'Text' - keys of form "Foo[XXXX]Bar" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      1 (84486.29x) !!!!!
  Testing collisions (high 32-bit) - Expected      50836.3, actual  25246 (0.50x)
  Testing collisions (high 28-43 bits) - Worst is 42 bits: 26/49 (0.52x)
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual 12453513 (244.97x) (12402677) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 138993/24 (5599.50x) !!!!!
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772241 (1.00x) (-4095)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  4 - 97.015% !!!!!

  Keyset 'Text' - keys of form "FooBar[XXXX]" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      8 (675890.31x) !!!!!
  Testing collisions (high 32-bit) - Expected      50836.3, actual  46503 (0.91x)
  Testing collisions (high 28-43 bits) - Worst is 43 bits: 2838/24 (114.33x) !!!!!
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual 444205 (8.74x) (393369) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 419910/24 (16916.58x) !!!!!
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit 28 - 22.409% !!!!!

  Keyset 'Text' - keys of form "[XXXX]FooBar" - 14776336 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Testing collisions (high 32-bit) - Expected      50836.3, actual  52020 (1.02x) (1184)
  Testing collisions (high 28-43 bits) - Worst is 40 bits: 576/198 (2.90x) !!!!!
  Testing collisions (high 12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      50836.3, actual  25597 (0.50x)
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 15/24 (0.60x)
  Testing collisions (low  12-bit) - Expected   14776336.0, actual 14772240 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   14776336.0, actual 14776080 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 0.164%

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 106.972948 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'TwoBytes' Tests ]]]

  Keyset 'TwoBytes' - up-to-4-byte keys, 652545 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual   1275 (55234399929.36x) !!!!!
  Testing collisions (high 32-bit) - Expected         99.1, actual   1431 (14.43x) (1332) !!!!!
  Testing collisions (high 23-34 bits) - Worst is 34 bits: 1328/24 (53.58x) !!!!!
  Testing collisions (high 12-bit) - Expected     652545.0, actual 648449 (0.99x) (-4096)
  Testing collisions (high  8-bit) - Expected     652545.0, actual 652289 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected         99.1, actual   1323 (13.34x) (1224) !!!!!
  Testing collisions (low  23-34 bits) - Worst is 34 bits: 1284/24 (51.80x) !!!!!
  Testing collisions (low  12-bit) - Expected     652545.0, actual 648449 (0.99x) (-4096)
  Testing collisions (low   8-bit) - Expected     652545.0, actual 652289 (1.00x) (-256)
  Testing distribution - Worst bias is the 16-bit window at bit  0 - 4.715% !!!!!

  Keyset 'TwoBytes' - up-to-8-byte keys, 5471025 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 109672 (67589333938.07x) !!!!!
  Testing collisions (high 32-bit) - Expected       6969.1, actual 113194 (16.24x) (106225) !!!!!
  Testing collisions (high 26-40 bits) - Worst is 40 bits: 109719/27 (4030.36x) !!!!!
  Testing collisions (high 12-bit) - Expected    5471025.0, actual 5466929 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected    5471025.0, actual 5470769 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected       6969.1, actual 728060 (104.47x) (721091) !!!!!
  Testing collisions (low  26-40 bits) - Worst is 40 bits: 300891/27 (11052.78x) !!!!!
  Testing collisions (low  12-bit) - Expected    5471025.0, actual 5466929 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected    5471025.0, actual 5470769 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 49.301% !!!!!

  Keyset 'TwoBytes' - up-to-12-byte keys, 18616785 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 119366 (6353177952.47x) !!!!!
  Testing collisions (high 32-bit) - Expected      80695.5, actual 204899 (2.54x) (124204) !!!!!
  Testing collisions (high 28-43 bits) - Worst is 43 bits: 128052/39 (3249.88x) !!!!!
  Testing collisions (high 12-bit) - Expected   18616785.0, actual 18612689 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   18616785.0, actual 18616529 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected      80695.5, actual 2193758 (27.19x) (2113063) !!!!!
  Testing collisions (low  28-43 bits) - Worst is 43 bits: 399540/39 (10140.06x) !!!!!
  Testing collisions (low  12-bit) - Expected   18616785.0, actual 18612689 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   18616785.0, actual 18616529 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 27.067% !!!!!

  Keyset 'TwoBytes' - up-to-16-byte keys, 44251425 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 638534 (6015188454.85x) !!!!!
  Testing collisions (high 32-bit) - Expected     455926.3, actual 978854 (2.15x) (522928) !!!!!
  Testing collisions (high 29-46 bits) - Worst is 46 bits: 656706/27 (23599.15x) !!!!!
  Testing collisions (high 12-bit) - Expected   44251425.0, actual 44247329 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   44251425.0, actual 44251169 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected     455926.3, actual 12577771 (27.59x) (12121845) !!!!!
  Testing collisions (low  29-46 bits) - Worst is 46 bits: 2747546/27 (98734.80x) !!!!!
  Testing collisions (low  12-bit) - Expected   44251425.0, actual 44247329 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   44251425.0, actual 44251169 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 74.700% !!!!!

  Keyset 'TwoBytes' - up-to-20-byte keys, 86536545 total keys
  Testing collisions ( 64-bit) - Expected    0.0, actual 657018 (1618444800.31x) !!!!!
  Testing collisions (high 32-bit) - Expected    1743569.4, actual 1738191 (1.00x) (-5378)
  Testing collisions (high 30-48 bits) - Worst is 48 bits: 699333/26 (26286.01x) !!!!!
  Testing collisions (high 12-bit) - Expected   86536545.0, actual 86532449 (1.00x) (-4096)
  Testing collisions (high  8-bit) - Expected   86536545.0, actual 86536289 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected    1743569.4, actual 28498727 (16.35x) (26755158) !!!!!
  Testing collisions (low  30-48 bits) - Worst is 48 bits: 7836554/26 (294554.61x) !!!!!
  Testing collisions (low  12-bit) - Expected   86536545.0, actual 86532449 (1.00x) (-4096)
  Testing collisions (low   8-bit) - Expected   86536545.0, actual 86536289 (1.00x) (-256)
  Testing distribution - Worst bias is the 20-bit window at bit  0 - 65.827% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 243.419017 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Window' Tests ]]]

  Keyset 'Window' -  32-bit key,  25-bit window - 32 tests, 33554432 keys per test
  Window at   0 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   1 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   2 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   3 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   4 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   5 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   6 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   7 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   8 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at   9 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  10 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  11 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  12 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  13 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  14 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  15 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  16 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  17 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  18 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  19 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  20 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  21 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  22 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  23 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  24 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  25 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  26 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  27 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  28 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  29 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  30 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  31 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)
  Window at  32 - Testing collisions ( 64-bit) - Expected    0.0, actual      0 (0.00x)


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 330.210891 seconds
  --- Testing beamsplitter_64 "hash composed of only s-boxes" GOOD

  [[[ Keyset 'Zeroes' Tests ]]]

  Keyset 'Zeroes' - 204800 keys
  Testing collisions ( 64-bit) - Expected    0.0, actual    802 (352725052480.84x) !!!!!
  Testing collisions (high 32-bit) - Expected          9.8, actual   1484 (151.96x) (1475) !!!!!
  Testing collisions (high 21-30 bits) - Worst is 30 bits: 1502/39 (38.45x) !!!!!
  Testing collisions (high 12-bit) - Expected     204800.0, actual 200704 (0.98x)
  Testing collisions (high  8-bit) - Expected     204800.0, actual 204544 (1.00x) (-256)
  Testing collisions (low  32-bit) - Expected          9.8, actual  20551 (2104.43x) (20542) !!!!!
  Testing collisions (low  21-30 bits) - Worst is 30 bits: 20621/39 (527.90x) !!!!!
  Testing collisions (low  12-bit) - Expected     204800.0, actual 200704 (0.98x)
  Testing collisions (low   8-bit) - Expected     204800.0, actual 204544 (1.00x) (-256)
  Testing distribution - Worst bias is the 15-bit window at bit  0 - 13.472% !!!!!

  *********FAIL*********


  Input vcode 0x00000001, Output vcode 0x00000001, Result vcode 0x00000001
  Verification value is 0x00000001 - Testing took 2.109805 seconds
```
