#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,rev=0,c=0,s,a=0,m=0,sum=0;
    scanf("%d",&n);
int t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(rev!=0)
    {
    s=rev%10;
    c++;
    if(s!=0)
{
m++;
}
int p=pow(s,m);
sum=sum+p;
rev=rev/10;
}
if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}