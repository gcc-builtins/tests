#include <assert.h>

void test_int() {
  volatile int a = 1;
  volatile int result = __atomic_and_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 1);
  assert(result == 1);
}

void test_long() {
  volatile long a = 1;
  volatile long result = __atomic_and_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 1);
  assert(result == 1);
}

void test_longlong() {
  volatile long long a = 1;
  volatile long long result = __atomic_and_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 1);
  assert(result == 1);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
