#include <assert.h>
#include <math.h>

int main() {
  float input = 0;
  assert(__builtin_sqrtf(input) == 0);
  input = -0;
  assert(__builtin_sqrtf(input) == 0);
  input = NAN;
  assert(isnanf(__builtin_sqrtf(input)));
  input = 2;
  assert(__builtin_sqrtf(input) >= 1.41 && __builtin_sqrtf(input) <= 1.42);
  input = 100;
  assert(__builtin_sqrtf(input) >= 9.99 && __builtin_sqrtf(input) <= 10.01);
  return 0;
}
