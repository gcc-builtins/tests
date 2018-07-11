#include <math.h>
#include <float.h>
#include <assert.h>

void test_float() {
  volatile float val = 0;
  assert(!__builtin_isnan(val));
  val = 5;
  assert(!__builtin_isnan(val));
  val = INFINITY;
  assert(!__builtin_isnan(val));
  val = NAN;
  assert(__builtin_isnan(val));
  val = FLT_MAX;
  assert(!__builtin_isnan(val));
  val = FLT_MIN;
  assert(!__builtin_isnan(val));
}

void test_double() {
  volatile double val = 0;
  assert(!__builtin_isnan(val));
  val = 5;
  assert(!__builtin_isnan(val));
  val = INFINITY;
  assert(!__builtin_isnan(val));
  val = NAN;
  assert(__builtin_isnan(val));
  val = DBL_MAX;
  assert(!__builtin_isnan(val));
  val = DBL_MIN;
  assert(!__builtin_isnan(val));
}

void test_longdouble() {
  volatile long double val = 0;
  assert(!__builtin_isnan(val));
  val = 5;
  assert(!__builtin_isnan(val));
  val = INFINITY;
  assert(!__builtin_isnan(val));
  val = NAN;
  assert(__builtin_isnan(val));
  val = LDBL_MAX;
  assert(!__builtin_isnan(val));
  val = LDBL_MIN;
  assert(!__builtin_isnan(val));
}

int main() {
  test_float();
  test_double();
  test_longdouble();
}
