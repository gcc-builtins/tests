#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void test_char() {
  volatile char a = 1;
  volatile char b = 5;
  volatile char result;
  bool overflow = __builtin_add_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 6);
  b = CHAR_MAX;
  overflow = __builtin_add_overflow(a, b, &result);
  assert(overflow);
  assert(result == CHAR_MIN);
}

void test_short() {
  volatile short a = 1;
  volatile short b = 5;
  volatile short result;
  bool overflow = __builtin_add_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 6);
  b = SHRT_MAX;
  overflow = __builtin_add_overflow(a, b, &result);
  assert(overflow);
  assert(result == SHRT_MIN);
}

void test_int() {
  volatile int a = 1;
  volatile int b = 5;
  volatile int result;
  bool overflow = __builtin_add_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 6);
  b = INT_MAX;
  overflow = __builtin_add_overflow(a, b, &result);
  assert(overflow);
  assert(result == INT_MIN);
}

void test_long() {
  volatile long a = 1;
  volatile long b = 5;
  volatile long result;
  bool overflow = __builtin_add_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 6);
  b = LONG_MAX;
  overflow = __builtin_add_overflow(a, b, &result);
  assert(overflow);
  assert(result == LONG_MIN);
}

void test_longlong() {
  volatile long long a = 1;
  volatile long long b = 5;
  volatile long long result;
  bool overflow = __builtin_add_overflow(a, b, &result);
  assert(!overflow);
  assert(result == 6);
  b = LLONG_MAX;
  overflow = __builtin_add_overflow(a, b, &result);
  assert(overflow);
  assert(result == LLONG_MIN);
}

int main() {
  test_char();
  test_short();
  test_int();
  test_long();
  test_longlong();
}
