#include "common.h"

v128 vavgr_d(v128 a, v128 b) {
  v128 dst;
#include "vavgr_d.h"
  return dst;
}

void test() {
  FUZZ2(vavgr_d);
}
