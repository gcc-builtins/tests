#include <assert.h>

void test_int() {
  volatile int a = 37;
  __sync_lock_release(&a);
  assert(a == 0);
}

void test_long() {
  volatile long a = 37;
  __sync_lock_release(&a);
  assert(a == 0);
}

void test_longlong() {
  volatile long long a = 37;
  __sync_lock_release(&a);
  assert(a == 0);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
