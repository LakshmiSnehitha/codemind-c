#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c,ct=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(n==c)
        {
            ct++;
            break;
        }
        a=b;
        b=c;
    }
    if(ct==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}