#include "common.h"

v128 vsrlrni_b_h(v128 a, v128 b, int imm) {
  v128 dst;
#include "vsrlrni_b_h.h"
  return dst;
}

void test() {
  FUZZ2(vsrlrni_b_h, 0);
  FUZZ2(vsrlrni_b_h, 7);
  FUZZ2(vsrlrni_b_h, 15);
}
