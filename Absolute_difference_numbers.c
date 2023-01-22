#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,x,c,s=0;
    scanf("%d%d",&a,&b);
    n=log10(a)+1;
    x=a/pow(10,n-b);
    c=a;
    int i1=0,i;
    for(i=1;i<=b;i++)
    {
        int r;
        r=c%10;
        r=r*pow(10,i1);
        s=s+r;
        i1++;
        c=c/10;
    }
    int z=abs(x-s);
    printf("%d",z);
}