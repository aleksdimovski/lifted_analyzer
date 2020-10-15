

int main() {
  int i=0, x=0, y=0;
  int n=__VERIFIER_nondet_int();
  if (!(n>0)) return 0;
  for(i=0; i<n; i++)
  {
    x = x-y;
    assert(x==0);
    y = __VERIFIER_nondet_int();
    if (!(y!=0)) return 0;
    x = x+y;
    assert(x!=0);
  }
  assert(x==0);
}

