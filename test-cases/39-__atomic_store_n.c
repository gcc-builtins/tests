#include <assert.h>

void test_int() {
  volatile int a;
  __atomic_store_n(&a, 37, __ATOMIC_RELAXED);
  assert(a == 37);
}

void test_long() {
  volatile long a;
  __atomic_store_n(&a, 37, __ATOMIC_RELAXED);
  assert(a == 37);
}

void test_longlong() {
  volatile long long a;
  __atomic_store_n(&a, 37, __ATOMIC_RELAXED);
  assert(a == 37);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
