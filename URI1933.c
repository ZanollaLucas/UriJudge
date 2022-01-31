#include <stdio.h>

int maior(int A, int B){
return (A>B)? A:B;
}

int main()
{
    int A,B;

    scanf("%d %d",&A ,&B);
    printf("%d\n",maior(A,B));


    return 0;
}
