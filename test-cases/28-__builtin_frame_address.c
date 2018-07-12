int main() {
  volatile void* result = __builtin_frame_address(0);
  return 0;
}
