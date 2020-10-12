/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=[-100,100];
  #if (F) 
	x=[-200,200];
  #endif;
  int y=x;
  if (y <= 0) y = -y; 
  if (y <= 69) assert (0==1); 
  return 0;
}