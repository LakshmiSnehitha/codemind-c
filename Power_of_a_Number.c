#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,c,d;
    scanf("%d%d%d",&x,&y,&m);
    c= pow(x,y);
    d=c%m;
    printf("%d",d);
}