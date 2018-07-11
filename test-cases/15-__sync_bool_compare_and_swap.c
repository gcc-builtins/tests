#include <assert.h>
#include <stdbool.h>

void test_int() {
  volatile int a = 1;
  bool success = __sync_bool_compare_and_swap(&a, 1, 6);
  assert(a == 6);
  assert(success);

  success = __sync_bool_compare_and_swap(&a, 123, 8);
  assert(a == 6);
  assert(!success);
}

void test_long() {
  volatile long a = 1;
  bool success = __sync_bool_compare_and_swap(&a, 1, 6);
  assert(a == 6);
  assert(success);

  success = __sync_bool_compare_and_swap(&a, 123, 8);
  assert(a == 6);
  assert(!success);
}

void test_longlong() {
  volatile long long a = 1;
  bool success = __sync_bool_compare_and_swap(&a, 1, 6);
  assert(a == 6);
  assert(success);

  success = __sync_bool_compare_and_swap(&a, 123, 8);
  assert(a == 6);
  assert(!success);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
