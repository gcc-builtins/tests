#include <assert.h>

int main() {
  volatile unsigned value = -1;
  assert(__builtin_clz(value) == 0);
  value = (unsigned int)-1 >> 3;
  assert(__builtin_clz(value) == 3);
  value = (int)((unsigned int)-1 >> 5) - 4;
  assert(__builtin_clz(value) == 5);
  return 0;
}
