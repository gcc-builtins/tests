#include <math.h>
#include <float.h>
#include <assert.h>

int main() {
  volatile double inf = __builtin_inf();
  assert(isinf(inf) && inf >= DBL_MAX);
}
