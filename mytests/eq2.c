
int main(void) {
  int w = __VERIFIER_nondet_uint();
  int x = w;
  int y = w + 1;
  int z = x + 1;
  while (__VERIFIER_nondet_uint()) {
    y++;
    z++;
  }
  assert(y == z);
  return 0;
}
