/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=10;
  int y=0;
  while (x != 0) {  
    x = x - 1;
	#if (F1) 
		y=y+1;
  	#endif
	#if (F2) 
		y=y+1;
  	#endif;
  }
  return 0;
}