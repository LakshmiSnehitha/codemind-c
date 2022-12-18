#include<stdio.h>
int main()
{
    int n,s,c,m,i;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<=m-1;i++)
    {
        s=i*i;
        c=i*i*i;
    printf("%d %d %d
",i,s,c);
}
}