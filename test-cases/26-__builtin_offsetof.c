#include <assert.h>
#include <stddef.h>

int main() {
  struct test {
    int a;
    long b;
    char c;
    int d[10];
  };
  assert(__builtin_offsetof(struct test, a) == offsetof(struct test, a));
  assert(__builtin_offsetof(struct test, b) == offsetof(struct test, b));
  assert(__builtin_offsetof(struct test, c) == offsetof(struct test, c));
  assert(__builtin_offsetof(struct test, d) == offsetof(struct test, d));

  assert(__builtin_offsetof(struct test, a) < offsetof(struct test, b));
  assert(__builtin_offsetof(struct test, b) < offsetof(struct test, c));
  assert(__builtin_offsetof(struct test, c) < offsetof(struct test, d));
}
