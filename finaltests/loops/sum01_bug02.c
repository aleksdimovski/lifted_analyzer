extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
#define a (2)
extern unsigned int __VERIFIER_nondet_uint();
int main() { 
  int i, j=10, n=__VERIFIER_nondet_uint(), sn=0;
	
  #if (A1) n=[0,2]; #endif
  #if (A2) n=[2,10]; #endif
  #if (A3) n=[10,20]; #endif	
  #if (A4) n=[20,32767]; #endif	
	
  for(i=1; i<=n; i++) {
    if (i<j) 
    sn = sn + a;
    j--;
  }
  __VERIFIER_assert(sn==n*a || sn == 0);
}
