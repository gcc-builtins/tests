#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void test_char() {
  volatile char a = 2;
  volatile char b = 5;
  volatile char result;
  bool overflow = __builtin_mul_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 10);
  b = CHAR_MAX;
  overflow = __builtin_mul_overflow(a, b, &result);
  assert(overflow);
  assert(result == -2);
}

void test_short() {
  volatile short a = 2;
  volatile short b = 5;
  volatile short result;
  bool overflow = __builtin_mul_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 10);
  b = SHRT_MAX;
  overflow = __builtin_mul_overflow(a, b, &result);
  assert(overflow);
  assert(result == -2);
}

void test_int() {
  volatile int a = 2;
  volatile int b = 5;
  volatile int result;
  bool overflow = __builtin_mul_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 10);
  b = INT_MAX;
  overflow = __builtin_mul_overflow(a, b, &result);
  assert(overflow);
  assert(result == -2);
}

void test_long() {
  volatile long a = 2;
  volatile long b = 5;
  volatile long result;
  bool overflow = __builtin_mul_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 10);
  b = LONG_MAX;
  overflow = __builtin_mul_overflow(a, b, &result);
  assert(overflow);
  assert(result == -2);
}

void test_longlong() {
  volatile long long a = 2;
  volatile long long b = 5;
  volatile long long result;
  bool overflow = __builtin_mul_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 10);
  b = LLONG_MAX;
  overflow = __builtin_mul_overflow(a, b, &result);
  assert(overflow);
  assert(result == -2);
}

int main() {
  test_char();
  test_short();
  test_int();
  test_long();
  test_longlong();
  return 0;
}
