#include <stdio.h>

int compare(int x, int s, int y, int s2){
if(x%s2==0 && y%s==0 && x!=s2 && y!=s) printf("Friends and lovers <3\n");
else
if(s==s2)printf("Almost lovers!\n");
else
if(x%s2==0 && y%s!=0)printf("%d friendzoned %d !\n", x,y);
else
if(x%s2!=0 && y%s==0)printf("%d friendzoned %d !\n", y,x);
else
printf("No connection.\n");
}

int max(int x, int y){
    return (x>y)? x:y;
}

int main() {
    unsigned int x,y,m,i,s,s2;
while(1){
    s=0;s2=0;
    scanf("%d %d",&x,&y);
    if(x==0 && y==0)break;
m=(max(x,y)*0.5)+1;
//printf("%d\n",m);
    for(i=1;i<m;i++){
        if (x%i==0 && x!=i){
            s=s+i;
        }
        if (y%i==0 && y!=i){
            s2=s2+i;
        }
}
//printf("%d %d\n",s,s2);
compare(x,s,y,s2);

}
    return 0;
}
