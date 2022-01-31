#include <stdio.h>
#define MAX 51

int max(int a, int b){
    return (a>b)? a:b;
}

int main(){
    int best, sum;
    int N, custo, i;
    int vet[MAX];
    while(scanf("%d", &N)!= EOF){
        scanf("%d", &custo);
        for(i = 0; i < N; i++){
            scanf("%d", &vet[i]);
            vet[i]-=custo;
        }
        best = sum = 0;
        for (i=0; i< N; i++){
            sum = max(vet[i], sum+vet[i]);
            best = max(best,sum);
        }
        printf("%d\n", best);
    }
    return 0;
}



// maratonaupf dropbox
