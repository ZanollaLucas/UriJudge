#include <stdio.h>
#include <stdlib.h>

struct Casa {
    int pessoas;
    int consumo;
    int consumomedio;
};

int compare(const void * a, const void * b);

int main()
{
   // freopen ("saida.txt","w",stdout);
    int N,cidade=1,j,k;
    while(scanf("%d",&N),N){

        struct Casa casas[N];
        int i=0,l=0;
        float consumototal =0;
        float pessoastotal =0;

        for(i;i<N;i++){
            scanf("%d %d",&casas[i].pessoas,&casas[i].consumo);
            casas[i].consumomedio = casas[i].consumo/ casas[i].pessoas;

            consumototal = consumototal + casas[i].consumo;
            pessoastotal = pessoastotal + casas[i].pessoas;

        }

        //insertionSortconsumo(casas,N);
        qsort(casas,N,sizeof(struct Casa),compare);

        if(cidade > 1){
            printf("\n");
        }
        printf("Cidade# %d:\n",cidade+10);

        for(j=1;j<200;j++){
            k=0;
            for(i=0;i<N;i++){
                if(j==casas[i].consumomedio){
                    k=k+casas[i].pessoas;
                }
                if(j<casas[i].consumomedio) break;
            }

            if(k>0){
                if(l>0)
                    printf(" ");
                printf("%d-%d",k,casas[i-1].consumomedio);
                l++;
            }
        }
        //truncado = floor( total * 10.0f ) / 10.0f;

        printf("\n%.2f m3.\n",floor( (consumototal / pessoastotal) * 100.0f) / 100.0f);
        //printf("\nConsumo medio: %.2f m3.\n",(consumototal / pessoastotal)-0.004999999999999);
        cidade++;
    }
   // fclose (stdout);
    return 0;
}

int compare (const void * a, const void * b)
{
  if((*(struct Casa*)a).consumomedio == (*(struct Casa*)b).consumomedio)
    return 0;//iguais
    else
        if((*(struct Casa*)a).consumomedio < (*(struct Casa*)b).consumomedio)
            return -1; //vem antes
        else
            return 1;//vem depois
}
