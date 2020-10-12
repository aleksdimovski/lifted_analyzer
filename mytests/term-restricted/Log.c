typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int xtmp;
    int res;
    int restmp;
    x = __VERIFIER_nondet_int();
	
  #if (A1) x=[-32768,-2]; #endif
  #if (A2) x=[-2,0]; #endif
  #if (A3) x=[0,2]; #endif	
  #if (A4) x=[2,32767]; #endif	
	
    res = 0;
    
    while (x > 1) {
        xtmp = x;
        restmp = 0;
        
        while (xtmp > 1) {
            xtmp = xtmp-2;
            restmp = restmp+1;
        }
        
        x = xtmp;
        res = res+1;
        
    }
    
    return 0;
}
