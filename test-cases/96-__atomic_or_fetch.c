#include <assert.h>

void test_int() {
  volatile int a = 9;
  volatile int result = __atomic_or_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 13);
  assert(result == 13);
}

void test_long() {
  volatile long a = 9;
  volatile long result = __atomic_or_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 13);
  assert(result == 13);
}

void test_longlong() {
  volatile long long a = 9;
  volatile long long result = __atomic_or_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 13);
  assert(result == 13);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
