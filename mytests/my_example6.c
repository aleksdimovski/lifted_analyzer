/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=[0,10];
  int y=[0,10];
  int s = x - y;
  if (s>=2) {
	#if (F) 
		y=y+2;
  	#else
		y=y+1;
  	#endif;
  }
  return 0;
}