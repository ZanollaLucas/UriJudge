#include <stdio.h>

int main() {

int d,h,m,s,d1,h1,m1,s1,dd,hh,mm,ss;
char dia[4],dias[4], p1[2],p2[2],p3[2],p4[2];
scanf("%s %d",dia,&d);
scanf("%d %s %d %s %d",&h,p1,&m,p2,&s);
scanf("%s %d",dias,&d1);
scanf("%d %s %d %s %d",&h1,p3,&m1,p4,&s1);

dd=d1-d;

    if (h>h1)
    {
        hh=24-h+h1;
        dd=dd-1;
    }
    else
    {
        hh=h1-h;
    }

    if (m>m1)
    {
        mm=60-m+m1;
        if (hh>0)
        {
        hh=hh-1;
        }
        else
        {
        dd=dd-1;
        hh=23;
        }
    }
    else
    {
        mm=m1-m;
    }

    if (s>s1)
    {
        ss=60-s+s1;
        if (mm>0)
        {
        mm=mm-1;
        }
        else if (mm==0 && hh>0)
        {
        hh=hh-1;
        mm=59;
        }
        else if (mm==0 && hh==0)
        {
        dd=dd-1;
        hh=23;
        mm=59;
        }
    }
    else
    {
        ss=s1-s;
    }


printf("%d dia(s)\n",dd);
printf("%d hora(s)\n",hh);
printf("%d minuto(s)\n",mm);
printf("%d segundo(s)\n",ss);

return 0;
}
/*

if(s>s1)
{
ss=60+s1-s;
m1=m1-1;
}
else
{
ss=s1-s;
}
if(m>m1)
{
mm=60+m1-m;
h1=h1-1;
}
else
{
mm=m1-m;
}
if(h>h1)
{
hh=24+h1-h;
dd=dd-1;
}
else
{
hh=h1-h;
}
dd=d1-d;
*/
