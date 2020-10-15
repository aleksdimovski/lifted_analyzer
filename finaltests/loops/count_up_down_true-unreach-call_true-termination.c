extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
//unsigned int __VERIFIER_nondet_uint();

int main()
{
  unsigned int n = __VERIFIER_nondet_uint();

  #if (A1) n=[0,2]; #endif
  #if (A2) n=[2,10]; #endif
  #if (A3) n=[10,20]; #endif	
  #if (A4) n=[20,32767]; #endif	
	
  unsigned int x=n, y=0;
  while(x>0)
  {
    x--;
    y++;
  }
  __VERIFIER_assert(y==n);
}

