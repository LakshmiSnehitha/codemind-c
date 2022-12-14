#include<stdio.h>
int main()
{
    int n,i,fact=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    if(n%i==0)
    {
        fact=fact+i;
    }
    }
    if(fact>n)
   {
        printf("True");
   }
   else
   {
       printf("False");
   }
}