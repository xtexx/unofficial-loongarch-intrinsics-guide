#include "common.h"

v256 xvabsd_b(v256 a, v256 b) {
  v256 dst;
#include "xvabsd_b.h"
  return dst;
}

void test() { XFUZZ2(xvabsd_b); }
