#include "common.h"

v128 vaddwod_h_bu_b(v128 a, v128 b) {
  v128 dst;
#include "vaddwod_h_bu_b.h"
  return dst;
}

void test() { FUZZ2(vaddwod_h_bu_b); }
