

int main()
{
  int n = __VERIFIER_nondet_int();
  int x=n, y=0;
  while(x>0)
  {
    x--;
    y++;
  }
  assert(y!=n);
}
