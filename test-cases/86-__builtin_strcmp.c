#include <assert.h>

char* str1 = "this is a test";
char* str2 = "this is a test";
char* str3 = "this is a test!";
char* str4 = "another string";

int main() {
  assert(__builtin_strcmp(str1, str2) == 0);
  assert(__builtin_strcmp(str1, str3) < 0);
  assert(__builtin_strcmp(str3, str1) > 0);
  assert(__builtin_strcmp(str4, str1) < 0);
  return 0;
}
