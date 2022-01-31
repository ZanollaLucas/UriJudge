#include <stdio.h>

int main() {
    int x,y,z,c;

    scanf("%d %d %d", &x, &y, &z);
    c=(x+y+abs(x-y))/2;
    c=(c+z+abs(c-z))/2;

    printf("%d eh o maior\n", c);
    return 0;
}

