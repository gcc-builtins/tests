#include <assert.h>
#include <stdbool.h>

void test_int() {
  volatile int a = 1;
  int result = __sync_val_compare_and_swap(&a, 1, 6);
  assert(a == 6);
  assert(result == 1);

  result = __sync_val_compare_and_swap(&a, 123, 8);
  assert(a == 6);
  assert(result == 6);
}

void test_long() {
  volatile long a = 1;
  long result = __sync_val_compare_and_swap(&a, 1, 6);
  assert(a == 6);
  assert(result == 1);

  result = __sync_val_compare_and_swap(&a, 123, 8);
  assert(a == 6);
  assert(result == 6);
}

void test_longlong() {
  volatile long long a = 1;
  long result = __sync_val_compare_and_swap(&a, 1, 6);
  assert(a == 6);
  assert(result == 1);

  result = __sync_val_compare_and_swap(&a, 123, 8);
  assert(a == 6);
  assert(result == 6);
}

int main() {
  test_int();
  test_long();
  test_longlong();
}
