#include <stdio.h>

int main()
{
    int N,H,v,t,perda,i;

    while(scanf("%d %d",&N,&H)!=EOF){
            perda=0;
            int M[N][2];
            for(i = 0; i < N; i++){
            scanf("%d %d",&M[i][0],&M[i][1]);
            }

            for(i = 0; i < N; i++){
            printf("%d %d\n",M[i][0],M[i][1]);
            }


    }


    return 0;
}
