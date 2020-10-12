/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=?, y=0, z=0;
  while (x >= 0) {
	z = z + x;
    if (y <= 17) {y = y + 1;}
	x = x - 1;
  }
  return 0;
}