/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int i=0, x=0;

  #if (A1) i=(i+1)/2; #endif
  #if (A2) i=(i+2)/2; #endif;
  #if (A3) i=(i+3)/2; #endif;
  #if (A4) i=(i+4)/2; #endif;
  #if (A5) i=(i+5)/2; #endif;
  #if (A6) i=(i+6)/2; #endif;
  #if (A7) i=(i+7)/2; #endif;
  #if (A8) i=(i+8)/2; #endif;
  #if (A9) i=(i+9)/2; #endif;
  #if (A10) i=(i+10)/2; #endif;
  #if (A11) i=(i+11)/2; #endif;
  #if (A12) i=(i+12)/2; #endif;
  #if (A13) i=(i+13)/2; #endif;
  #if (A14) i=(i+14)/2; #endif;
  #if (A15) i=(i+15)/2; #endif;
	
  while (x <= i) {  
    x = x + 1;
  }

  return 0;
}