#include <assert.h>

void test_int() {
  volatile int a = 37;
  volatile int result = __sync_fetch_and_and(&a, 7);
  assert(a == 5);
  assert(result == 37);
}

void test_long() {
  volatile long a = 37;
  volatile long result = __sync_fetch_and_and(&a, 7);
  assert(a == 5);
  assert(result == 37);
}

void test_longlong() {
  volatile long long a = 37;
  volatile long long result = __sync_fetch_and_and(&a, 7);
  assert(a == 5);
  assert(result == 37);
}

int main() {
  test_int();
  test_long();
  test_longlong();
  return 0;
}
