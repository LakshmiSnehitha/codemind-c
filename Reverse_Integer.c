#include<stdio.h>
int main()
{
    int rev=0,rem,n,tem;
    scanf("%d",&n);
    tem=n;
        while(n!=0)
        {
          rem=n%10;
          rev=rev*10+rem;
          n=n/10;
        }
        if(tem=rev)
        {
            printf("%d",rev);
        }
}