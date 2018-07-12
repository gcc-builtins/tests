#include <assert.h>

void test_int() {
  volatile int a = 1;
  volatile int result = __sync_add_and_fetch(&a, 5);
  assert(a == 6);
  assert(result == 6);
}

void test_long() {
  volatile long a = 1;
  volatile long result = __sync_add_and_fetch(&a, 5);
  assert(a == 6);
  assert(result == 6);
}

void test_longlong() {
  volatile long long a = 1;
  volatile long long result = __sync_add_and_fetch(&a, 5);
  assert(a == 6);
  assert(result == 6);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
