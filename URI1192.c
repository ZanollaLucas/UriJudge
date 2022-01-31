#include <stdio.h>
#define MINUSCULO(char) char >= 'a' && char <= 'z'
//pré processamento pra saber se a letra é minuscula

int main(){

    char leitura[5];
    int N,a,c;
    scanf("%d",&N); //le numero de testes
    while(N!=0){
        scanf("%s",leitura);
        a = leitura[0] - 48; //converte o primeiro numero pra int
        c = leitura[2] - 48; //converte o segundo numero
        if(a==c){
            printf("%d\n",a*c);
        }
        else if(MINUSCULO(leitura[1])){
            printf("%d\n",c+a);
        }
        else printf("%d\n",c-a);


        N--;
        }
    return 0;
}

