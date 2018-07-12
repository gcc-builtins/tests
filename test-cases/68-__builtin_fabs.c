#include <assert.h>
#include <float.h>

int main() {
  volatile double val = 0;
  assert(__builtin_fabs(val) == 0);
  val = -0.0;
  assert(__builtin_fabs(val) == 0);
  val = -1.0;
  assert(__builtin_fabs(val) == 1.0);
  val = DBL_MAX;
  assert(__builtin_fabs(val) == DBL_MAX);
  return 0;
}
