#include <assert.h>

void test_int() {
  volatile int a = 1;
  volatile int result = __sync_lock_test_and_set(&a, 5);
  assert(a == 5);
  assert(result == 1);
}

void test_long() {
  volatile long a = 1;
  volatile long result = __sync_lock_test_and_set(&a, 5);
  assert(a == 5);
  assert(result == 1);
}

void test_longlong() {
  volatile long long a = 1;
  volatile long long result = __sync_lock_test_and_set(&a, 5);
  assert(a == 5);
  assert(result == 1);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
