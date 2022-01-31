#include <stdio.h>
#include <math.h>


int main() {

double a,b,c,d;
scanf("%lf %lf %lf",&a,&b,&c);
d = b*b - 4*c*a;
if (a==0)printf("Impossivel calcular/n");
else{
        if (d < 0) printf("Impossivel calcular/n");
    else{
        printf("R1 = %.5lf\n",(-b + pow(d,.5))/(2*a));
        printf("R2 = %.5lf\n",(-b - pow(d,.5))/(2*a));
    }
}
return 0;
}

