#include <string.h>
#include <assert.h>

char* str = "hello test!";

int main() {
  volatile char needle = '!';
  assert(__builtin_memchr(str, needle, strlen(str)) == &str[10]);
  needle = 'a';
  assert(__builtin_memchr(str, needle, strlen(str)) == NULL);
  needle = 'l';
  assert(__builtin_memchr(str, needle, strlen(str)) == &str[2]);
}
