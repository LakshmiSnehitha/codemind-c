#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,temp,r,rev=0;
        scanf("%d",&n);
        temp=n;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(rev==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}