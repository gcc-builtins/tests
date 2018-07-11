#include <assert.h>
#include <string.h>

char str[100];

int main() {
  __builtin___memset_chk(&str, 'a', sizeof(str), sizeof(str));
  str[99] = '\0';
  assert(strcmp(str,
                "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") == 0);
}
