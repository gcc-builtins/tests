#include <assert.h>
#include <float.h>

int main() {
  volatile float hugeval = __builtin_huge_valf();
  assert(hugeval >= FLT_MAX);
}
