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
	x=[10,20];
  #else
	x=[0,10];
  #endif;	
  int y=[0,1];
  if (y >= 1) x = -x; 
  assert (x==0); 
  return 0;
}