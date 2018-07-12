#include <assert.h>
#include <float.h>
#include <math.h>

void test_float() {
  volatile float value = 0;
  assert(!__builtin_signbit(value));
  value = 43354;
  assert(!__builtin_signbit(value));
  value = INFINITY;
  assert(!__builtin_signbit(value));
  value = FLT_MIN;
  assert(!__builtin_signbit(value));
  value = FLT_MAX;
  assert(!__builtin_signbit(value));
  value = NAN;
  assert(!__builtin_signbit(value));
}

void test_double() {
  volatile double value = 0;
  assert(!__builtin_signbit(value));
  value = 43354;
  assert(!__builtin_signbit(value));
  value = INFINITY;
  assert(!__builtin_signbit(value));
  value = FLT_MIN;
  assert(!__builtin_signbit(value));
  value = FLT_MAX;
  assert(!__builtin_signbit(value));
  value = NAN;
  assert(!__builtin_signbit(value));
}

void test_longdouble() {
  volatile long double value = 0;
  assert(!__builtin_signbit(value));
  value = 43354;
  assert(!__builtin_signbit(value));
  value = INFINITY;
  assert(!__builtin_signbit(value));
  value = FLT_MIN;
  assert(!__builtin_signbit(value));
  value = FLT_MAX;
  assert(!__builtin_signbit(value));
  value = NAN;
  assert(!__builtin_signbit(value));
}

int main() {
  test_float();
  test_double();
  test_longdouble();
  return 0;
}
