extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int main(void) {
  unsigned int w = __VERIFIER_nondet_uint();
  #if (A1) w=[0,10]; #endif	
  #if (A2) w=[10,32767]; #endif	
	
  unsigned int x = w;
  unsigned int y = __VERIFIER_nondet_uint();
  #if (A3) y=[0,10]; #endif	
  #if (A4) y=[10,32767]; #endif		
  unsigned int z = y;
  while (__VERIFIER_nondet_uint()) {
    if (__VERIFIER_nondet_uint()) {
      ++w; ++x;
    } else {
      --y; --z;
    }
  }
  __VERIFIER_assert(w == x && y == z);
  return 0;
}
