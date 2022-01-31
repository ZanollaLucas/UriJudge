#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int N,Q,tamdastringS,tamdastringR;
    char S[100001];
    char R[101];
    scanf("%d",&N);
    while(N--){
        scanf("%s",S);
        tamdastringS = strlen(S);
        scanf("%d",&Q);
        while(Q--){
            int i=0;
            int j=0;
            scanf("%s",R);
            tamdastringR = strlen(R);
            while(i<tamdastringS && j<tamdastringR){  //funciona enquanto ambas forem verdadeiras ... se fosse or, ele só ia ser FALSE se ambas as condições fossem falsas
                if(S[i]== R[j])j++;

                i++;
            }
        if(j==tamdastringR)
            printf("Yes\n");
        else
            printf("No\n");

        }

    }
    return 0;
}
