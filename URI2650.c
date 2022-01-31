#include <stdio.h>
#include <string.h>

int main() {

   int N,W,i=0,H[100];
   char S[100], S2[100];
   scanf("%d", &N);
   scanf("%d", &W);
   printf("%d\n",N);
   for (i;i<N;i++){
   scanf("%s %s %d",S,S2,&H[i]);
    if (H[i]>W) printf("%s %s\n",S,S2);
   }

   return 0;
}
