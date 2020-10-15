/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=1;
	
  #if (DLEVEL1) 
	x=3;
  #endif;
	
  #if (DLEVEL2) 
	x=5;
  #else
	x=9;
  #endif;	
	
  while (x <= 100) 
    x = x + 1;
  return 0;
}