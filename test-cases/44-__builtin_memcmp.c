#include <string.h>
#include <assert.h>

int main() {
  volatile char arr[20];
  memset((int*)arr, 0, sizeof(char) * 20);
  char hello[20] = "hello world";
  assert(__builtin_memcmp((char*)arr, hello, sizeof(arr)) < 0);
  assert(__builtin_memcmp(hello, (char*)arr, sizeof(arr)) > 0);
  memcpy((char*)arr, hello, strlen(hello) + 1);
  assert(__builtin_memcmp(hello, (char*)arr, strlen(hello) + 1) == 0);
  arr[10] = 'z';
  assert(__builtin_memcmp((char*)arr, hello, sizeof(arr)) > 0);
  assert(__builtin_memcmp(hello, (char*)arr, sizeof(arr)) < 0);
}
