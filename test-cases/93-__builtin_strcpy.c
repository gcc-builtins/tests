#include <assert.h>
#include <string.h>

char *src = "hello test";
char dest[100];

int main() {
  __builtin_strcpy(dest, src);
  assert(strcmp(dest, src) == 0);
  return 0;
}
