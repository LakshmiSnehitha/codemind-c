#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d",&x);
    if(x%10==0)
    {
        p=x/10;
        printf("%d",p);
    }
    else if(x%10==5)
    {
        p=x/10;
        printf("%d",p+1);
    }
    else if(x%5==0)
    {
        p=x/5;
        printf("%d",p);
    }
    else
    {
        printf("-1");
    }
}