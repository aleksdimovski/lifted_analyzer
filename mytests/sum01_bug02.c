

int main() { 
  int a = 2;
  int i, j=10, n=?, sn=0;
  for(i=1; i<=n; i++) {
    if (i<j) 
    sn = sn + a;
    j--;
  }
  assert(sn==n*a || sn == 0);
}
