#include <assert.h>
#include <string.h>

int main() {
  volatile char* src[100];
  strcpy((char*)src, "this is a test");
  volatile char dest[100];
  __builtin_strcpy((char*)dest, (char*)src);
  assert(strcmp((char*)dest, (char*)src) == 0);
  return 0;
}
