#include <assert.h>
#include <float.h>

int main() {
  volatile double max = __builtin_huge_val();
  assert(max >= DBL_MAX);
  return 0;
}
