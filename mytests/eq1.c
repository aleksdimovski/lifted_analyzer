
int main(void) {
  int w = __VERIFIER_nondet_uint();
  int x = w;
  int y = __VERIFIER_nondet_uint();
  int z = y;
  while (__VERIFIER_nondet_uint()) {
    if (__VERIFIER_nondet_uint()) {
      ++w; ++x;
    } else {
      --y; --z;
    }
  }
  assert(w == x && y == z);
  return 0;
}
