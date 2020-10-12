

int main() { 
  int a = 2;
  int i, j=10, n=?, sn=0;

  #if (A) n=[-20,0]; #endif
  #if (B) n=[0,20]; #endif		
	
  for(i=1; i<=n; i++) {
    sn = sn + a;
  }
  assert(sn==n*a || sn == 0);
}
