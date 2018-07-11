#include <assert.h>

void test_int() {
  volatile int a = 5;
  int previous;
  int val = 37;
  __atomic_exchange(&a, &val, &previous, __ATOMIC_RELAXED);
  assert(a == 37);
  assert(previous == 5);
}

void test_long() {
  volatile long a = 5;
  long previous;
  long val = 37;
  __atomic_exchange(&a, &val, &previous, __ATOMIC_RELAXED);
  assert(a == 37);
  assert(previous == 5);
}

void test_longlong() {
  volatile long long a = 5;
  long long previous;
  long long val = 37;
  __atomic_exchange(&a, &val, &previous, __ATOMIC_RELAXED);
  assert(a == 37);
  assert(previous == 5);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
