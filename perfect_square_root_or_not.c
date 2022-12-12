#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        a=i*i;
    }
    if(a==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}