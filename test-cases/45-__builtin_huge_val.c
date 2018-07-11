#include <float.h>
#include <assert.h>

int main() {
  volatile double max = __builtin_huge_val();
  assert(max >= DBL_MAX);
}
