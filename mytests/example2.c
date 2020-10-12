/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=7, y=[0,9], input;
  x=x+1;

  while (input) {
	x = 7;
    x=x+1;
	y = y + 1;
  }
  return 0;
}