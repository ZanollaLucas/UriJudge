#include <stdio.h>


int main()
{
    int t,i,f;
    char nome [20];

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s %d",nome,&f);
        if (nome[0] == 'T' && nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r'){
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
       }

    return 0;
}
