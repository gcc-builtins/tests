#include <assert.h>
#include <math.h>

int main() {
  volatile float result = __builtin_nanf("1");
  assert(isnanf(result));
  result = __builtin_nanf("0xF");
  assert(isnanf(result));
  return 0;
}
