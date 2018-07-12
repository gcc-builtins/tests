#include <assert.h>

int main() {
  volatile char buf[100];
  __builtin___clear_cache((char*)&buf[0], (char*)&buf[50]);
  return 0;
}
