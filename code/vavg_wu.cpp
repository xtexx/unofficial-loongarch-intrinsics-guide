#include "common.h"

v128 vavg_wu(v128 a, v128 b) {
  v128 dst;
#include "vavg_wu.h"
  return dst;
}

void test() {
  FUZZ2(vavg_wu);
}
