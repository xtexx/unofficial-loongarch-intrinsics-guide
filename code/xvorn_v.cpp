#include "common.h"

v256 xvorn_v(v256 a, v256 b) {
  v256 dst;
#include "xvorn_v.h"
  return dst;
}

void test() { XFUZZ2(xvorn_v); }
