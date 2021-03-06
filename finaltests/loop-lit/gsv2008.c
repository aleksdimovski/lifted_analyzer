// Source: Sumit Gulwani, Saurabh Srivastava, Ramarathnam Venkatesan: "Program
// Analysis as Constraint Solving", PLDI 2008.

#include "assert.h"
int main() {
	int LARGE_INT = 1000000;
    int x,y;
    x = -50;
    y = __VERIFIER_nondet_int();
	
  #if (A1) y=[-32768,-4]; #endif
  #if (A2) y=[-4,-1]; #endif
  #if (A3) y=[0,0]; #endif	
  #if (A4) y=[1,4]; #endif		
  #if (A5) y=[4,32767]; #endif		
	
    if (!(-1000 < y && y < LARGE_INT)) return 0;
    while (x < 0) {
	x = x + y;
	y++;
    }
    __VERIFIER_assert(y > 0);
    return 0;
}
