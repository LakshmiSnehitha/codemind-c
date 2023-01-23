#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,s=0;
    scanf("%d %d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}