#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n!=0)
    {
        int x;
        scanf("%d",&x);
        if(x<3)
        {
            printf("LIGHT
");
        }
        else if(x>=3 && x<7)
        {
            printf("MODERATE
");
        }
        else
        {
            printf("HEAVY
");
        }
        n--;
    }
}