// Source: Thomas A. Henzinger, Thibaud Hottelier, Laura Kovacs: "Valigator:
// A verification Tool with Bound and Invariant Generation", LPAR 2008

#include "assert.h"

int main() {
    int a = __VERIFIER_nondet_int();
	
  #if (A1) a=[-32768,-4]; #endif
  #if (A2) a=[-4,-1]; #endif
  #if (A3) a=[0,0]; #endif	
  #if (A4) a=[1,4]; #endif		
  #if (A5) a=[4,32767]; #endif	
	
    int b = __VERIFIER_nondet_int();
    int res, cnt;
    if (!(a <= 1000000)) return 0;
    if (!(0 <= b && b <= 1000000)) return 0;
    res = a;
    cnt = b;
    while (cnt > 0) {
	cnt = cnt - 1;
	res = res + 1;
    }
    assert(res == a + b);
    return 0;
}
