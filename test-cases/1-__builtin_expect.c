#include <assert.h>
#include <stdlib.h>

int main() {
  volatile void *ptr = NULL;
  assert(__builtin_expect(ptr == NULL, 0));
  assert(__builtin_expect(ptr == NULL, 1));

  volatile long value = 10;
  assert(10 == __builtin_expect(value, 10));
  assert(10 == __builtin_expect(value, 11));
}
