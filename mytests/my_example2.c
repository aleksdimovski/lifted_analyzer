/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=7, y=0, input;
  #if (F1) 
	x=x+1;
  #else
	x=x+2;
  #endif;
  while (input) {
	x = 7;
    #if (F1) 
		x=x+1;
    #else
		x=x+2;
    #endif;
	y = y + 1;
  }
  return 0;
}