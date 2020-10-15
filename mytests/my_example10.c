/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=0;
  #if (F) 
	x=5;
  #endif;	
  int i=0;
  while (i <= 10) {
	if (?) x = x + 1;
	i = i + 1;
  }
  return 0;
}