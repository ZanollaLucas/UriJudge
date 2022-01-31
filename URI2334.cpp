#include <stdio.h>

int main() {
    unsigned long long int p;
    while(scanf("%llu", &p)){
    printf("%llu\n", p);
    if (p == -1){ break;}
    else
    if(p==0){printf("0\n");}
    else
    printf("%llu\n",p-1);

}
    return 0;
}
