#include "assert.h"

int main() {
  int n;
  int k = 0;
  int i = 0;
  n = __VERIFIER_nondet_int();
	
  #if (A1) n=[-32768,-2]; #endif
  #if (A2) n=[-2,0]; #endif
  #if (A3) n=[0,2]; #endif	
  #if (A4) n=[2,32767]; #endif		
	
  while( i < n ) {
      i++;
      k++;
  }
  int j = n;
  while( j > 0 ) {
      assert(k > 0);
      j--;
      k--;
  }
  return 0;
}
