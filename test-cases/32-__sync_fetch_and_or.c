#include <assert.h>

void test_int() {
  volatile int a = 32;
  volatile int result = __sync_fetch_and_or(&a, 5);
  assert(a == 37);
  assert(result == 32);
}

void test_long() {
  volatile long a = 32;
  volatile long result = __sync_fetch_and_or(&a, 5);
  assert(a == 37);
  assert(result == 32);
}

void test_longlong() {
  volatile long long a = 32;
  volatile long long result = __sync_fetch_and_or(&a, 5);
  assert(a == 37);
  assert(result == 32);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
