int main() {
  volatile void* result = __builtin_return_address(0);
  return 0;
}
