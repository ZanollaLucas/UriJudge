#include<stdio.h>
#include<string.h>
#define MAX 51

int mem[MAX];

int fib(int n){
    if (mem[n] != 0) return mem[n];
    if ( n<= 2) return mem[n] = n;
    return mem[n] = fib (n-1) + fib (n-2);
}

int toFib(int dec){
    int ret, ff, idx;
    ret = 0;
    for(idx = 25; idx >= 1; idx--){
        ff = fib(idx);
        if(ff > dec) continue;
        ret |= (1 << (idx - 1));
        dec -= ff;
    }
    return ret;
}

int toDec(int fb){
    int ret, ff, idx;
    ret = 0;
    for(idx = 25; idx >= 1; idx--){
        if(fb & (1 << (idx - 1))) ret += fib(idx);
    }
    return ret;
}

int miles(int x){
    return toDec(toFib(x) >> 1);
}

int main(){
    int t, x;
    scanf("%d", &t);
    memset(mem, 0, sizeof(mem));
    while(t--){
        scanf("%d", &x);
        printf("%d\n", miles(x));
    }
    return 0;
}
