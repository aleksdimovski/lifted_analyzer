/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int i=0;

  #if (A1) i=i+1; #endif
  #if (A2) i=i+1; #endif
  #if (A3) i=i+1; #endif
  #if (A4) i=i+1; #endif
  #if (A5) i=i+1; #endif
  #if (A6) i=i+1; #endif
  #if (A7) i=i+1; #endif
  #if (A8) i=i+1; #endif
  #if (A9) i=i+1; #endif
  #if (A10) i=i+1; #endif

  return 0;
}