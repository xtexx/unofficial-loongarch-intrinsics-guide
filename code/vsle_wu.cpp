#include "common.h"

v128 vsle_wu(v128 a, v128 b) {
  v128 dst;
#include "vsle_wu.h"
  return dst;
}

void test() { FUZZ2(vsle_wu); }
