#include "common.h"

v128 vsubwev_q_d(v128 a, v128 b) {
  v128 dst;
#include "vsubwev_q_d.h"
  return dst;
}

void test() { FUZZ2(vsubwev_q_d); }
