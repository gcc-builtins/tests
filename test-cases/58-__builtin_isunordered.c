#include <assert.h>
#include <math.h>

void isunordered_float() {
  volatile float a = 0;
  volatile float b = 0;
  assert(!__builtin_isunordered(a, b));
  b = NAN;
  assert(__builtin_isunordered(a, b));
  a = NAN;
  assert(__builtin_isunordered(a, b));
  a = INFINITY;
  assert(__builtin_isunordered(a, b));
  b = INFINITY;
  assert(!__builtin_isunordered(a, b));
  a = -INFINITY;
  assert(!__builtin_isunordered(a, b));
}

void isunordered_double() {
  volatile float a = 0;
  volatile float b = 0;
  assert(!__builtin_isunordered(a, b));
  b = NAN;
  assert(__builtin_isunordered(a, b));
  a = NAN;
  assert(__builtin_isunordered(a, b));
  a = INFINITY;
  assert(__builtin_isunordered(a, b));
  b = INFINITY;
  assert(!__builtin_isunordered(a, b));
  a = -INFINITY;
  assert(!__builtin_isunordered(a, b));
}

int main() {
  isunordered_float();
  isunordered_double();
  return 0;
}
