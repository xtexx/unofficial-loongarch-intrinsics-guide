#include "common.h"

v128 vsubwod_d_w(v128 a, v128 b) {
  v128 dst;
#include "vsubwod_d_w.h"
  return dst;
}

void test() { FUZZ2(vsubwod_d_w); }
