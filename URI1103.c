#include <stdio.h>

int main()
{
    int h1,h2,m1,m2,t;
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2))
    {
        if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break;
        if(h1>h2) {
            if(m1>m2){
                t=(h2-h1+24)*60+ m2-m1;
                printf("%d\n",t);
            }
            else{
                t=(h2-h1+24)*60+ m2-m1;
                printf("%d\n",t);
            }
        }
        else{
        if(h1==h2){
            if(m1>m2){
                t=(h2-h1+23)*60+ m2-m1+60;
                printf("%d\n",t);
            }
            else{
                t=(h2-h1)*60+ m2-m1;
                printf("%d\n",t);
            }
        }
        else{

                t=(h2-h1)*60+ m2-m1;
                printf("%d\n",t);
        }
        }
    }

    return 0;
}
