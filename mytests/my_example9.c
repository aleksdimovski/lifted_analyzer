/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=0;
  int n=[0,100];
  #if (F) 
	n=[0,200];
  #endif;	
  while (x < n) {  
	x = x + 1;
  }
  return 0;
}