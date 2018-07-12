#include <assert.h>

int main() {
  volatile char* str = "hello world";
  assert(__builtin_strlen((char*)str) == 11);
  str = "";
  assert(__builtin_strlen((char*)str) == 0);
  return 0;
}
