#include<stdio.h>
int main()
{
    int n,m,e;
    scanf("%d%d%d",&n,&m,&e);
    if(n<=m*e)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}