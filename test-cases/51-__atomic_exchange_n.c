#include <assert.h>

void test_int() {
  volatile int a = 5;
  int previous = __atomic_exchange_n(&a, 37, __ATOMIC_RELAXED);
  assert(a == 37);
  assert(previous == 5);
}

void test_long() {
  volatile long a = 5;
  long previous = __atomic_exchange_n(&a, 37, __ATOMIC_RELAXED);
  assert(a == 37);
  assert(previous == 5);
}

void test_longlong() {
  volatile long long a = 5;
  long long previous = __atomic_exchange_n(&a, 37, __ATOMIC_RELAXED);
  assert(a == 37);
  assert(previous == 5);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
