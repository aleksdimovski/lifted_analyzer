/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=1;
	
  #if (A) 
	x=5;
  #else
	x=9;
  #endif;	
	
  int y = x + 1;

  return 0;
}