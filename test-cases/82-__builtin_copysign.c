#include <assert.h>
#include <float.h>
#include <math.h>

void test_float() {
  volatile float magnitude = 0;
  volatile float sign = 0;
  assert(__builtin_copysign(magnitude, sign) == 0);
  magnitude = 1;
  assert(__builtin_copysign(magnitude, sign) == 1);
  sign = -3;
  assert(__builtin_copysign(magnitude, sign) == -1);
  sign = FLT_MAX;
  magnitude = FLT_MAX;
  assert(__builtin_copysign(magnitude, sign) == FLT_MAX);
  sign = FLT_MIN;
  magnitude = FLT_MIN;
  assert(__builtin_copysign(magnitude, sign) == FLT_MIN);
  magnitude = NAN;
  assert(isnan(__builtin_copysign(magnitude, sign)));
  sign = 3;
  assert(isnan(__builtin_copysign(magnitude, sign)));
  magnitude = 5;
  sign = -INFINITY;
  assert(__builtin_copysign(magnitude, sign) == -5);
  sign = INFINITY;
  assert(__builtin_copysign(magnitude, sign) == 5);
  magnitude = INFINITY;
  assert(__builtin_copysign(magnitude, sign) == INFINITY);
  sign = -INFINITY;
  assert(__builtin_copysign(magnitude, sign) == -INFINITY);
}

void test_double() {
  volatile double magnitude = 0;
  volatile double sign = 0;
  assert(__builtin_copysign(magnitude, sign) == 0);
  magnitude = 1;
  assert(__builtin_copysign(magnitude, sign) == 1);
  sign = -3;
  assert(__builtin_copysign(magnitude, sign) == -1);
  sign = DBL_MAX;
  magnitude = DBL_MAX;
  assert(__builtin_copysign(magnitude, sign) == DBL_MAX);
  sign = DBL_MIN;
  magnitude = DBL_MIN;
  assert(__builtin_copysign(magnitude, sign) == DBL_MIN);
  magnitude = NAN;
  assert(isnan(__builtin_copysign(magnitude, sign)));
  sign = 3;
  assert(isnan(__builtin_copysign(magnitude, sign)));
  magnitude = 5;
  sign = -INFINITY;
  assert(__builtin_copysign(magnitude, sign) == -5);
  sign = INFINITY;
  assert(__builtin_copysign(magnitude, sign) == 5);
  magnitude = INFINITY;
  assert(__builtin_copysign(magnitude, sign) == INFINITY);
  sign = -INFINITY;
  assert(__builtin_copysign(magnitude, sign) == -INFINITY);
}

int main() {
  test_float();
  test_double();
  return 0;
}
