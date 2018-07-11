#include <assert.h>

int main() {
  volatile unsigned long value = -1;
  assert(__builtin_clzl(value) == 0);
  value = (unsigned long)-1 >> 3;
  assert(__builtin_clzl(value) == 3);
  value = (long)((unsigned long)-1 >> 5) - 4;
  assert(__builtin_clzl(value) == 5);
}
