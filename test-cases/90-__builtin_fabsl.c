#include <assert.h>
#include <float.h>

int main() {
  volatile long double val = 0;
  assert(__builtin_fabsl(val) == 0);
  val = -0.0;
  assert(__builtin_fabsl(val) == 0);
  val = -1.0;
  assert(__builtin_fabsl(val) == 1.0);
  val = LDBL_MAX;
  assert(__builtin_fabsl(val) == LDBL_MAX);
  return 0;
}
