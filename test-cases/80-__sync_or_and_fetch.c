#include <assert.h>

void test_int() {
  volatile int a = 5;
  volatile int result = __sync_or_and_fetch(&a, 9);
  assert(a == 13);
  assert(result == 13);
}

void test_long() {
  volatile long a = 5;
  volatile long result = __sync_or_and_fetch(&a, 9);
  assert(a == 13);
  assert(result == 13);
}

void test_longlong() {
  volatile long long a = 5;
  volatile long long result = __sync_or_and_fetch(&a, 9);
  assert(a == 13);
  assert(result == 13);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
