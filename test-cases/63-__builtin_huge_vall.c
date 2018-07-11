#include <assert.h>
#include <float.h>

int main() {
  volatile long double max = __builtin_huge_vall();
  assert(max >= DBL_MAX);
}
