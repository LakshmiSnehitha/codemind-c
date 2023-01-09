#include<stdio.h>
int main()
{
    int i,r,k,c=0,s;
    scanf("%d%d%d",&s,&r,&k);
    for(i=s;i<=r;i++)
    {
    if(i%k==0 )
    {
        c++;
    }
    }
    printf("%d",c);
}