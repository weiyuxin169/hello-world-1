#include <stdio.h>
int main(void){
  int x = 21;
  int y = 32;
  int n = 0;
  int i = 1;
  for (i<=x*y; n==0; i=i+1){
	 if (i % x == 0 && i % y == 0)
	    n=i;
}
  printf("%d和%d的最小公倍数是 %d", x, y, n);
  return 0;
}
