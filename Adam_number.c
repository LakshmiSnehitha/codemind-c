#include<stdio.h>
int main()
{
    int n,c,rev=0,rem,d,rc,rs=0;
    scanf("%d",&n);
    c=n*n;//12 144
    while(n!=0)//12
    {
    rem=n%10;
    rev=rev*10+rem;
       n=n/10;
    }//21
    d=rev*rev;//441
    while(d!=0)
    {
        rc=d%10;
        rs=rs*10+rc;
        d=d/10;
    }
    if(c==rs)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}