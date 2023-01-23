#include<stdio.h>
int main()
{
    int n,c=0,rev=0,r=0,l;
    scanf("%d",&n);
    while(n)
    {
        l=n%10;
        r=r*10+l;
        n=n/10;
    }
    while(r)
    {
        if(r%10==6 && c==0)
        {
            rev=(rev*10)+9;
            c++;
        }
        else
        {
            rev=(rev*10)+(r%10);
        }
        r=r/10;
    }
    printf("%d",rev);
}