#include <assert.h>
#include <stdbool.h>

void test_int() {
  volatile int a = 37;
  int expected = 37;
  volatile bool success = __atomic_compare_exchange_n(
      &a, &expected, 5, false, __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  assert(a == 5);
  assert(success);

  expected = 32;
  success = __atomic_compare_exchange_n(&a, &expected, 1, false,
                                        __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  assert(a == 5);
  assert(!success);
}

void test_long() {
  volatile long a = 37;
  long expected = 37;
  volatile bool success = __atomic_compare_exchange_n(
      &a, &expected, 5, false, __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  assert(a == 5);
  assert(success);

  expected = 32;
  success = __atomic_compare_exchange_n(&a, &expected, 1, false,
                                        __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  assert(a == 5);
  assert(!success);
}

void test_longlong() {
  volatile long long a = 37;
  long long expected = 37;
  volatile bool success = __atomic_compare_exchange_n(
      &a, &expected, 5, false, __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  assert(a == 5);
  assert(success);

  expected = 32;
  success = __atomic_compare_exchange_n(&a, &expected, 1, false,
                                        __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  assert(a == 5);
  assert(!success);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
