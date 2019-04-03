/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=1;
  #if (F) 
	x=5;
  #endif;	
  int i=15;
  while (i > 0) {
	x = x + 1;
	i = i - 1;
  }
  return 0;
}