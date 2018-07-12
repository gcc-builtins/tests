#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void test_char() {
  volatile char a = CHAR_MIN + 1;
  volatile char b = 1;
  volatile char result;
  bool overflow = __builtin_sub_overflow(a, b, &result);
  assert(!overflow);
  assert(result == CHAR_MIN);
  b = 2;
  overflow = __builtin_sub_overflow(a, b, &result);
  assert(overflow);
  assert(result == CHAR_MAX);
}

void test_short() {
  volatile short a = SHRT_MIN + 1;
  volatile short b = 1;
  volatile short result;
  bool overflow = __builtin_sub_overflow(a, b, &result);
  assert(!overflow);
  assert(result == SHRT_MIN);
  b = 2;
  overflow = __builtin_sub_overflow(a, b, &result);
  assert(overflow);
  assert(result == SHRT_MAX);
}

void test_int() {
  volatile int a = INT_MIN + 1;
  volatile int b = 1;
  volatile int result;
  bool overflow = __builtin_sub_overflow(a, b, &result);
  assert(!overflow);
  assert(result == INT_MIN);
  b = 2;
  overflow = __builtin_sub_overflow(a, b, &result);
  assert(overflow);
  assert(result == INT_MAX);
}

void test_long() {
  volatile long a = LONG_MIN + 1;
  volatile long b = 1;
  volatile long result;
  bool overflow = __builtin_sub_overflow(a, b, &result);
  assert(!overflow);
  assert(result == LONG_MIN);
  b = 2;
  overflow = __builtin_sub_overflow(a, b, &result);
  assert(overflow);
  assert(result == LONG_MAX);
}

void test_longlong() {
  volatile long long a = LLONG_MIN + 1;
  volatile long long b = 1;
  volatile long long result;
  bool overflow = __builtin_sub_overflow(a, b, &result);
  assert(!overflow);
  assert(result == LLONG_MIN);
  b = 2;
  overflow = __builtin_sub_overflow(a, b, &result);
  assert(overflow);
  assert(result == LLONG_MAX);
}

int main() {
  test_char();
  test_short();
  test_int();
  test_long();
  test_longlong();
  return 0;
}
