#include<stdio.h>
int main()
{
    int n,p=1,i,a;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            p=a*i;
            printf("%d x %d = %d
",a,i,p);
        }
    }
}