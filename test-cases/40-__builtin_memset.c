#include <assert.h>

int main() {
  volatile int arr[10];
  __builtin_memset((int*)arr, -1, sizeof(int) * 10);
  for (int i = 0; i < 10; i++) {
    assert(arr[i] == -1);
  }
  return 0;
}
