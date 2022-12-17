#include<stdio.h>
int main()
{
    int n,s=0,m=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        m=m*r;
        n=n/10;
    }
    if(s==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}