#include <assert.h>
#include <float.h>

int main() {
  volatile float val = 0;
  assert(__builtin_fabsf(val) == 0);
  val = -0.0;
  assert(__builtin_fabsf(val) == 0);
  val = -1.0;
  assert(__builtin_fabsf(val) == 1.0);
  val = FLT_MAX;
  assert(__builtin_fabsf(val) == FLT_MAX);
  return 0;
}
