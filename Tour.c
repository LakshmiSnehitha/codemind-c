#include<stdio.h>
int main()
{
    int t,i,h,m,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&h,&m);
    c=h*5+m*7;
    printf("%d
",c);
}
}