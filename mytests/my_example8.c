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
  int n=?;
  while (x <= n) {  
    if (x<0 || x>n) assert (0);
	x = x + 1;
  }
  return 0;
}