#include<stdio.h>
int main()
{
    int n,t,rev=0,r;
    scanf("%d",&n);
    t==n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}