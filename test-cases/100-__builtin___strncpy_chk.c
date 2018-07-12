#include <assert.h>
#include <string.h>

char dest[100];
char src[100];

int main() {
  strcpy(src, "hello test");
  __builtin___strncpy_chk(dest, src, sizeof(dest), sizeof(dest));
  assert(strcmp(src, dest) == 0);
  return 0;
}
