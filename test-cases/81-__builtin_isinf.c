#include <assert.h>
#include <float.h>
#include <math.h>

void test_float() {
  volatile float val = 0;
  assert(!__builtin_isinf(val));
  val = 5;
  assert(!__builtin_isinf(val));
  val = INFINITY;
  assert(__builtin_isinf(val));
  val = -INFINITY;
  assert(__builtin_isinf(val));
  val = NAN;
  assert(!__builtin_isinf(val));
  val = FLT_MAX;
  assert(!__builtin_isinf(val));
  val = FLT_MIN;
  assert(!__builtin_isinf(val));
}

void test_double() {
  volatile double val = 0;
  assert(!__builtin_isinf(val));
  val = 5;
  assert(!__builtin_isinf(val));
  val = INFINITY;
  assert(__builtin_isinf(val));
  val = -INFINITY;
  assert(__builtin_isinf(val));
  val = NAN;
  assert(!__builtin_isinf(val));
  val = FLT_MAX;
  assert(!__builtin_isinf(val));
  val = FLT_MIN;
  assert(!__builtin_isinf(val));
}

void test_longdouble() {
  volatile long double val = 0;
  assert(!__builtin_isinf(val));
  val = 5;
  assert(!__builtin_isinf(val));
  val = INFINITY;
  assert(__builtin_isinf(val));
  val = -INFINITY;
  assert(__builtin_isinf(val));
  val = NAN;
  assert(!__builtin_isinf(val));
  val = FLT_MAX;
  assert(!__builtin_isinf(val));
  val = FLT_MIN;
  assert(!__builtin_isinf(val));
}

int main() {
  test_float();
  test_double();
  test_longdouble();
  return 0;
}
