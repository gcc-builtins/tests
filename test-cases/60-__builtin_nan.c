#include <assert.h>
#include <math.h>

int main() {
  volatile double nan1 = __builtin_nan("1");
  assert(isnan(nan1));
  volatile double nan2 = __builtin_nan("2");
  assert(isnan(nan2));
  assert(nan1 != nan2);
  volatile double nan3 = __builtin_nan("0xff");
  assert(isnan(nan3));
  assert(nan3 != nan2);
  // volatile double nan4 = __builtin_nan("081"); TODO: should this work?
  // assert(isnan(nan4));
  // assert(nan2 != nan4);
  return 0;
}
