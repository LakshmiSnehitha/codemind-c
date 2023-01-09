#include<stdio.h>
int main()
{
    int a,b,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("PROFIT
");
    }
    else if(a==b)
    {
        printf("NEUTRAL
");
    }
    else
    {
        printf("LOSS
");
    }
}
}
