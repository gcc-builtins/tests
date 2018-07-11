#include <assert.h>

void test_int() {
  volatile int a = 37;
  int result;
  __atomic_load(&a, &result, __ATOMIC_RELAXED);
  assert(a == 37);
}

void test_long() {
  volatile long a = 37;
  long result;
  __atomic_load(&a, &result, __ATOMIC_RELAXED);
  assert(a == 37);
}

void test_longlong() {
  volatile long long a = 37;
  long long result;
  __atomic_load(&a, &result, __ATOMIC_RELAXED);
  assert(a == 37);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
