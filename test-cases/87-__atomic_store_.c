#include <assert.h>

void test_int() {
  volatile int a;
  volatile int val = 37;
  __atomic_store(&a, (int*)&val, __ATOMIC_RELAXED);
  assert(a == 37);
}

void test_long() {
  volatile long a;
  volatile long val = 37;
  __atomic_store(&a, (long*)&val, __ATOMIC_RELAXED);
  assert(a == 37);
}

void test_longlong() {
  volatile long long a;
  volatile long long val = 37;
  __atomic_store(&a, (long long*)&val, __ATOMIC_RELAXED);
  assert(a == 37);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
