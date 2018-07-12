#include <assert.h>

int main() {
  volatile unsigned long long value = -1;
  assert(__builtin_clzll(value) == 0);
  value = (unsigned long long)-1 >> 3;
  assert(__builtin_clzll(value) == 3);
  value = (long long)((unsigned long long)-1 >> 5) - 4;
  assert(__builtin_clzll(value) == 5);
  return 0;
}
