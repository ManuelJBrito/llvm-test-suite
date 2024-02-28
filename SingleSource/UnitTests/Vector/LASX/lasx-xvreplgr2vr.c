#include "lasx_test_util.h"
#include <lasxintrin.h>

int
main ()
{
  __m256i __m256i_out, __m256i_result;
  __m256 __m256_out, __m256_result;
  __m256d __m256d_out, __m256d_result;
  v4u64 v4u64_op0, v4u64_op1, v4u64_op2;
  v8i32 v8i32_op0, v8i32_op1, v8i32_op2;

  int int_op0, int_op1, i = 1, fail;
  long int long_op0, long_op1;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  int_op0 = 0x0000000000000001;
__m256i_result = (__m256i){0x0101010101010101, 0x0101010101010101,
                             0x0101010101010101, 0x0101010101010101};
  __m256i_out = __lasx_xvreplgr2vr_b(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_b(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_b(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_b(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_b(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000400;
__m256i_result = (__m256i){0x0400040004000400, 0x0400040004000400,
                             0x0400040004000400, 0x0400040004000400};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000084;
__m256i_result = (__m256i){0x0084008400840084, 0x0084008400840084,
                             0x0084008400840084, 0x0084008400840084};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0xffffffff;
__m256i_result = (__m256i){0xffffffffffffffff, 0xffffffffffffffff,
                             0xffffffffffffffff, 0xffffffffffffffff};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000020202020;
__m256i_result = (__m256i){0x2020202020202020, 0x2020202020202020,
                             0x2020202020202020, 0x2020202020202020};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0xffffffff;
__m256i_result = (__m256i){0xffffffffffffffff, 0xffffffffffffffff,
                             0xffffffffffffffff, 0xffffffffffffffff};
  __m256i_out = __lasx_xvreplgr2vr_h(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x3c4c0a5c;
__m256i_result = (__m256i){0x3c4c0a5c3c4c0a5c, 0x3c4c0a5c3c4c0a5c,
                             0x3c4c0a5c3c4c0a5c, 0x3c4c0a5c3c4c0a5c};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x97541c58;
__m256i_result = (__m256i){0x97541c5897541c58, 0x97541c5897541c58,
                             0x97541c5897541c58, 0x97541c5897541c58};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000000000ff;
__m256i_result = (__m256i){0x000000ff000000ff, 0x000000ff000000ff,
                             0x000000ff000000ff, 0x000000ff000000ff};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000020202020;
__m256i_result = (__m256i){0x2020202020202020, 0x2020202020202020,
                             0x2020202020202020, 0x2020202020202020};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000000000ff;
__m256i_result = (__m256i){0x000000ff000000ff, 0x000000ff000000ff,
                             0x000000ff000000ff, 0x000000ff000000ff};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000000000ff;
__m256i_result = (__m256i){0x000000ff000000ff, 0x000000ff000000ff,
                             0x000000ff000000ff, 0x000000ff000000ff};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  int_op0 = 0xffffffff;
__m256i_result = (__m256i){0xffffffffffffffff, 0xffffffffffffffff,
                             0xffffffffffffffff, 0xffffffffffffffff};
  __m256i_out = __lasx_xvreplgr2vr_w(int_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000020202020;
__m256i_result = (__m256i){0x0000000020202020, 0x0000000020202020,
                             0x0000000020202020, 0x0000000020202020};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000020006;
__m256i_result = (__m256i){0x0000000000020006, 0x0000000000020006,
                             0x0000000000020006, 0x0000000000020006};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
__m256i_result = (__m256i){0x0000000000000000, 0x0000000000000000,
                             0x0000000000000000, 0x0000000000000000};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000020006;
__m256i_result = (__m256i){0x0000000000020006, 0x0000000000020006,
                             0x0000000000020006, 0x0000000000020006};
  __m256i_out = __lasx_xvreplgr2vr_d(long_op0);
  check_lasx_out(&__m256i_result, &__m256i_out, sizeof(__m256i_out), __FILE__, __LINE__);

  return 0;
}