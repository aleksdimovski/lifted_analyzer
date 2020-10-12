

int main() {
  int y=[0,9];	
  int x=10;
  while (x >= 0) {  
    x = x - 1;
	#if (F1) 
		y=y+1;
  	#endif
	#if (F2) 
		y=y+1;
  	#endif;
  }
  return 0;
}