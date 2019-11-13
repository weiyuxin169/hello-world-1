//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
int main(){
 int i;
 int n;
 int num=1;
 int m;
 int k;
 for(n=2;n>0;n++){
  m=n;
  for(i=0;i>-1;i++){
   k=m%10;
   m=m/10;
   if(k==1){
    num++;
   }
   if(m==0){
    break;
   }
   if(m==1){
    num++;break;
   }
  }
  if(n==num)
   break;
 }
 printf("n=%d\n",n);
 return 0;
}

