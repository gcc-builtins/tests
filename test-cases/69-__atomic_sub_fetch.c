#include <assert.h>

void test_int() {
  volatile int a = 11;
  volatile int result = __atomic_sub_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 6);
  assert(result == 6);
}

void test_long() {
  volatile long a = 11;
  volatile long result = __atomic_sub_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 6);
  assert(result == 6);
}

void test_longlong() {
  volatile long long a = 11;
  volatile long long result = __atomic_sub_fetch(&a, 5, __ATOMIC_RELAXED);
  assert(a == 6);
  assert(result == 6);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
