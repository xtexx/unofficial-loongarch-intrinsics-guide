#include "common.h"

v128 vsrln_w_d(v128 a, v128 b) {
  v128 dst;
#include "vsrln_w_d.h"
  return dst;
}

void test() { FUZZ2(vsrln_w_d); }
