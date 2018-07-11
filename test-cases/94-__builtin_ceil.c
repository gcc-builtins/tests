#include <assert.h>

int main() {
  volatile double val = 0;
  assert(__builtin_ceil(val) == 0);
}
