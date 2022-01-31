#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTRING 1001

struct caracter {
    int valorcaracter;
    int frequencia;
};

int compare (const void * a, const void * b)
{
  if((*(struct caracter*)a).frequencia == (*(struct caracter*)b).frequencia){
    if((*(struct caracter*)a).valorcaracter < (*(struct caracter*)b).valorcaracter)
        return 1; //vem depois
    else
        return -1;//vem antes
  }
    else
        if((*(struct caracter*)a).frequencia < (*(struct caracter*)b).frequencia)
            return -1; //vem antes
        else
            return 1;//vem depois
}

int comparechar(const void *a, const void *b) {
      return *(char *)a - *(char *)b;
}

int main()
{

    int i,tamdastring,freq,comparador,l=0,quantdechar;
    char linha[MAXSTRING];
    while(gets(linha)){
        if(l != 0)printf("\n");
        tamdastring = strlen(linha);

        //printf("%d \n",tamdastring);
        qsort(linha, tamdastring, sizeof linha[0], comparechar);
        //printf("%s \n",linha);

        struct caracter nalinha[tamdastring];
        comparador = linha[0];
        quantdechar = 0;
        freq=0;

        for(i=0;i<tamdastring;i++){
            if(comparador == linha[i])
                freq++;
            else{
                nalinha[quantdechar].valorcaracter = comparador;
                nalinha[quantdechar].frequencia = freq;
                comparador = linha[i];
                freq = 1;
                quantdechar++;
            }
        }

        nalinha[quantdechar].valorcaracter = comparador;
        nalinha[quantdechar].frequencia = freq;
        quantdechar++;

        qsort(nalinha, quantdechar, sizeof (struct caracter), compare);

        for(i=0;i<quantdechar;i++){
            printf("%d %d\n",nalinha[i].valorcaracter,nalinha[i].frequencia);
        }

        l++;
    }

return 0;
}
