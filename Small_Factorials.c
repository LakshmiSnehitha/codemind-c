#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,fact=1,j;
        scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        fact=fact*j;
    }
    printf("%d
",fact);
}
}
