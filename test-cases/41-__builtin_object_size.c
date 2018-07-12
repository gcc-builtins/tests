#include <assert.h>
#include <stdlib.h>

void local_buffer() {
  int buf[10];
  size_t size = __builtin_object_size(&buf, 0);
  assert(size == 10 * sizeof(int) || size == (size_t)-1);
  size = __builtin_object_size(&buf, 1);
  assert(size == 10 * sizeof(int) || size == (size_t)-1);
  size = __builtin_object_size(&buf, 2);
  assert(size == 10 * sizeof(int) || size == (size_t)0);
  size = __builtin_object_size(&buf, 3);
  assert(size == 10 * sizeof(int) || size == (size_t)0);
}

int var;
void side_effect() {
  int buf[10];
  size_t size = __builtin_object_size(&buf[var++], 0);
  assert(size == (size_t)-1);
  size = __builtin_object_size(&buf[var++], 1);
  assert(size == (size_t)-1);
  __builtin_object_size(&buf[var++], 2);
  assert(size == (size_t)-1);  // TODO: shouldn't this be zero?
  __builtin_object_size(&buf[var++], 3);
  assert(size == (size_t)-1);  // TODO: shouldn't this be zero?
}

char buf[10];
void global_buffer() {
  size_t size = __builtin_object_size(&buf, 0);
  assert(size == 10 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&buf, 1);
  assert(size == 10 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&buf, 2);
  assert(size == 10 * sizeof(char) || size == (size_t)0);
  size = __builtin_object_size(&buf, 3);
  assert(size == 10 * sizeof(char) || size == (size_t)0);
}

void local_struct() {
  struct test {
    char buf[10];
    char buf2[10];
  } t;
  size_t size = __builtin_object_size(&t, 0);
  assert(size == 20 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&t, 1);
  assert(size == 20 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&t, 2);
  assert(size == 20 * sizeof(char) || size == (size_t)0);
  size = __builtin_object_size(&t, 3);
  assert(size == 20 * sizeof(char) || size == (size_t)0);

  size = __builtin_object_size(&t.buf, 0);
  assert(size == 20 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&t.buf, 1);
  assert(size == 10 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&t.buf, 2);
  assert(size == 20 * sizeof(char) || size == (size_t)0);
  size = __builtin_object_size(&t.buf, 3);
  assert(size == 10 * sizeof(char) || size == (size_t)0);

  size = __builtin_object_size(&t.buf2, 0);
  assert(size == 10 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&t.buf2, 1);
  assert(size == 10 * sizeof(char) || size == (size_t)-1);
  size = __builtin_object_size(&t.buf2, 2);
  assert(size == 10 * sizeof(char) || size == (size_t)0);
  size = __builtin_object_size(&t.buf2, 3);
  assert(size == 10 * sizeof(char) || size == (size_t)0);
}

int main() {
  local_buffer();
  global_buffer();
  local_struct();
  side_effect();
  return 0;
}
