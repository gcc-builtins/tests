#include <assert.h>
#include <string.h>

char str[100];

int main() {
  strcpy(str, "hello test");
  __builtin___memmove_chk(&str, &str[5], 6, sizeof(str));
}
