#include <assert.h>

int main() {
  volatile int* arr = __builtin_alloca(sizeof(int) * 1000);
  for (int j = 0; j < 1000; j++) {
    arr[j] = j;
  }
  int sum = 0;
  for (int j = 0; j < 1000; j++) {
    sum += j;
  }
  assert(sum == 499500);
  return 0;
}
