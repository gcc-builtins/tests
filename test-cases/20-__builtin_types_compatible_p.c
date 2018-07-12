#include <assert.h>

int main() {
  assert(__builtin_types_compatible_p(int, int));
  assert(__builtin_types_compatible_p(void, void));
  assert(__builtin_types_compatible_p(int[], int[5]));
  assert(__builtin_types_compatible_p(long[10], long[]));
  assert(__builtin_types_compatible_p(const long, long));
  assert(__builtin_types_compatible_p(long, volatile long));

  assert(!__builtin_types_compatible_p(enum {test, test1}, long[]));
  assert(!__builtin_types_compatible_p(enum {foo, bar}, enum {hot, dog}));
  assert(!__builtin_types_compatible_p(double, float));
  assert(!__builtin_types_compatible_p(void*, int*));
  assert(!__builtin_types_compatible_p(char*, void*));
  assert(!__builtin_types_compatible_p(int*, char*));
  assert(!__builtin_types_compatible_p(char*, int*));
  assert(!__builtin_types_compatible_p(unsigned, int));
  assert(!__builtin_types_compatible_p(char, int));
  assert(!__builtin_types_compatible_p(int, char));
  return 0;
}
