#include <assert.h>

void test_int() {
  volatile int a = 5;
  volatile int result = __sync_sub_and_fetch(&a, 1);
  assert(a == 4);
  assert(result == 4);
}

void test_long() {
  volatile long a = 5;
  volatile long result = __sync_sub_and_fetch(&a, 1);
  assert(a == 4);
  assert(result == 4);
}

void test_longlong() {
  volatile long long a = 5;
  volatile long long result = __sync_sub_and_fetch(&a, 1);
  assert(a == 4);
  assert(result == 4);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
