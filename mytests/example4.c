/*
TERMINATION

suggested parameters:
- partition abstract domain = boxes [default]
- function abstract domain = affine [default]
- backward widening delay = 2 [default]
*/

int main() {
  int x=5, y=?;
  int u=3, v=?;
	
  if (x==y) x=2*y;
  if (u==v) u=3*v;
  int z = x + u;
  return 0;
}