/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x;
  #if (A) 
	x=[-10,10];
  #else
	x=[0,10];
  #endif;	
  int y=x;
  if (x <= 0) y = -y; 
  assert (y<0); 
  return 0;
}