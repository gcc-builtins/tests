#include <assert.h>
#include <string.h>

char dest[100];
char src[100];

int main() {
  strcpy(src, "hello test");
  __builtin___memcpy_chk(dest, src, strlen(src) + 1, sizeof(dest));
  assert(strcmp(src, dest) == 0);
  return 0;
}
