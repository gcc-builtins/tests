int main() {
  int arr[10];
  __builtin_prefetch(arr);
  return 0;
}
