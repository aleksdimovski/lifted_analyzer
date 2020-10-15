

int main() { 
  int a = 2;
  int i, j=10, n=?, sn=0;
	
  #if (A1) n=[-32768,-2]; #endif
  #if (A2) n=[-2,0]; #endif
  #if (A3) n=[0,2]; #endif	
  #if (A4) n=[2,32767]; #endif		
	
  for(i=1; i<=n; i++) {
    if (i<j) 
    sn = sn + a;
    j--;
  }
  assert(sn==n*a || sn == 0);
}
