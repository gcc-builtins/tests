#include <assert.h>

void test_int() {
  volatile int a = 6;
  volatile int result = __atomic_fetch_or(&a, 3, __ATOMIC_RELAXED);
  assert(a == 7);
  assert(result == 6);
}

void test_long() {
  volatile long a = 6;
  volatile long result = __atomic_fetch_or(&a, 3, __ATOMIC_RELAXED);
  assert(a == 7);
  assert(result == 6);
}

void test_longlong() {
  volatile long long a = 6;
  volatile long long result = __atomic_fetch_or(&a, 3, __ATOMIC_RELAXED);
  assert(a == 7);
  assert(result == 6);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
