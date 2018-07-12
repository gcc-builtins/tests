#include <assert.h>
#include <float.h>
#include <math.h>

int main() {
  volatile double inf = __builtin_inf();
  assert(isinf(inf) && inf >= DBL_MAX);
  return 0;
}
