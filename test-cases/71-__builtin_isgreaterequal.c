#include <assert.h>
#include <math.h>

void test_float() {
  volatile float a = 0;
  volatile float b = 0;
  assert(__builtin_isgreaterequal(a, b) != 0);
  a = 1.5;
  assert(__builtin_isgreaterequal(a, b) != 0);
  b = 1.5;
  assert(__builtin_isgreaterequal(a, b) != 0);
  b = INFINITY;
  assert(__builtin_isgreaterequal(a, b) == 0);
  a = -INFINITY;
  assert(__builtin_isgreaterequal(a, b) == 0);
  a = NAN;
  assert(__builtin_isgreaterequal(a, b) == 0);
  b = NAN;
  assert(__builtin_isgreaterequal(a, b) == 0);
}

void test_double() {
  volatile double a = 0;
  volatile double b = 0;
  assert(__builtin_isgreaterequal(a, b) != 0);
  a = 1.5;
  assert(__builtin_isgreaterequal(a, b) != 0);
  b = 1.5;
  assert(__builtin_isgreaterequal(a, b) != 0);
  b = INFINITY;
  assert(__builtin_isgreaterequal(a, b) == 0);
  a = -INFINITY;
  assert(__builtin_isgreaterequal(a, b) == 0);
  a = NAN;
  assert(__builtin_isgreaterequal(a, b) == 0);
  b = NAN;
  assert(__builtin_isgreaterequal(a, b) == 0);
}

void test_longdouble() {
  volatile float a = 0;
  volatile float b = 0;
  assert(__builtin_isgreaterequal(a, b) != 0);
  a = 1.5;
  assert(__builtin_isgreaterequal(a, b) != 0);
  b = 1.5;
  assert(__builtin_isgreaterequal(a, b) != 0);
  b = INFINITY;
  assert(__builtin_isgreaterequal(a, b) == 0);
  a = -INFINITY;
  assert(__builtin_isgreaterequal(a, b) == 0);
  a = NAN;
  assert(__builtin_isgreaterequal(a, b) == 0);
  b = NAN;
  assert(__builtin_isgreaterequal(a, b) == 0);
}

int main() {
  test_float();
  test_double();
  test_longdouble();
  return 0;
}
