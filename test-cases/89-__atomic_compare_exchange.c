#include <assert.h>
#include <stdbool.h>

void test_int() {
  volatile int a = 37;
  int expected = 37;
  int desired = 5;
  volatile bool success = __atomic_compare_exchange(
      &a, &expected, &desired, false, __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  assert(a == 5);
  assert(success);

  expected = 32;
  desired = 1;
  success = __atomic_compare_exchange(&a, &expected, &desired, false,
                                      __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  assert(a == 5);
  assert(!success);
}

void test_long() {
  volatile long a = 37;
  long expected = 37;
  long desired = 5;
  volatile bool success = __atomic_compare_exchange(
      &a, &expected, &desired, false, __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  assert(a == 5);
  assert(success);

  expected = 32;
  desired = 1;
  success = __atomic_compare_exchange(&a, &expected, &desired, false,
                                      __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  assert(a == 5);
  assert(!success);
}

void test_longlong() {
  volatile long long a = 37;
  long long expected = 37;
  long long desired = 5;
  volatile bool success = __atomic_compare_exchange(
      &a, &expected, &desired, false, __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  assert(a == 5);
  assert(success);

  desired = 1;
  expected = 32;
  success = __atomic_compare_exchange(&a, &expected, &desired, false,
                                      __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  assert(a == 5);
  assert(!success);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
