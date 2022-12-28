#include<stdio.h>
int main()
{
    int n,rev=0,r,c,e,m,rem=0,a;
    scanf("%d",&n);
    c=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    m=rev*rev;
    while(m!=0)
    {
        a=m%10;
        rem=rem*10+a;
        m=m/10;
    }
    if(c==rem)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}