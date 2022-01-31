#include <stdio.h>
int min(int a,int b){
 return (a>b)? b:a;
}

int main() {

   int A,B,C,p,s,t;
   scanf("%d", &A);
   scanf("%d", &B);
   scanf("%d", &C);

   p= B*2+C*4;
   s= A*2+C*2;
   t= A*4+B*2;




   printf("%d",min(min(p,s),t));
   return 0;
}
