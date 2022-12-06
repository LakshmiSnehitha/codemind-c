#include<stdio.h>
int main()
{
    int n,max=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a>max)
        {
            max=a;
        }
        n=n/10;
    }
    printf("%d",max);
    
    
}