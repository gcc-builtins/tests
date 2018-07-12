#include <assert.h>

void test_int() {
  volatile int a = 3;
  volatile int result = __sync_and_and_fetch(&a, 5);
  assert(a == 1);
  assert(result == 1);
}

void test_long() {
  volatile long a = 3;
  volatile long result = __sync_and_and_fetch(&a, 5);
  assert(a == 1);
  assert(result == 1);
}

void test_longlong() {
  volatile long long a = 3;
  volatile long long result = __sync_and_and_fetch(&a, 5);
  assert(a == 1);
  assert(result == 1);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
