#include <assert.h>

void test_int() {
  volatile int a = 7;
  volatile int result = __sync_fetch_and_xor(&a, 31);
  assert(a == 24);
  assert(result == 7);
}

void test_long() {
  volatile long a = 7;
  volatile long result = __sync_fetch_and_xor(&a, 31);
  assert(a == 24);
  assert(result == 7);
}

void test_longlong() {
  volatile long long a = 7;
  volatile long long result = __sync_fetch_and_xor(&a, 31);
  assert(a == 24);
  assert(result == 7);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
