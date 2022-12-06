#include<stdio.h>
int main()
{
    int n,s=0,i,j,s2=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        j=s*s;
    }
    for(i=1;i<=n;i++)
    {
       b=i*i;
       s2=s2+b;
    }
    int c=j-s2;
    printf("%d",c);
}