#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho = 0;

void removerChar(char linha[], int i)
{
    for (int x = i; x < strlen(linha); x++)
        linha[x] = linha[x+1];
    tamanho--;
}

void removeSand(char linha[])
{
    for (int i = 0; i < strlen(linha); i++)
    {
        if (linha[i] == '.')
        {
            removerChar(linha, i);
            i--;
        }
    }
}

int diamond (char linha[])
{
    removeSand(linha);
    int diamante = 0;
    bool first = true;
    int direita = 0;

    for (int j = 0; j < tamanho; j++)
    {
        if (linha[j] == '<')
        {
            if (first)
            {
                direita = j;
                first = false;
            }
            for (int i = direita; i < tamanho; i++)
            {
                if (linha[i] == '>')
                {
                    diamante++;
                    removerChar(linha, i);
                    removerChar(linha, j);
                    i--;
                    j--;
                    direita = i;
                    break;
                }
            }
        }

    }
    return diamante;
}

int main ()
{
    int n = 0, count = 0;

    char linha[10000];

    scanf("%d",&n);

    while (count < n)
    {
        scanf("%s", linha);

        tamanho = strlen(linha);

        printf("%d", diamond(linha));

        printf("\n");

        count++;
    }

    return 0;
}
