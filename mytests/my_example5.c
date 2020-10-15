/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=[0,10], y=?;
  #if (F1) 
	x=[0,15];
  #endif;	
  if (x<=y) y=x;
  return 0;
}