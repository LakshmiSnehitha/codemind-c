#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    { 
        int n;
        scanf("%d",&n);
    c=sqrt(n);
    if(c*c==n)
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