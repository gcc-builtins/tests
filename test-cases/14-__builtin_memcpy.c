#include <string.h>
#include <assert.h>

char* src = "hello world";
char dest[100];

int main() {
  __builtin_memcpy((char*)dest, src, strlen(src) + 1);
  assert(memcmp(src, (char*)dest, strlen(src)) == 0);
}
