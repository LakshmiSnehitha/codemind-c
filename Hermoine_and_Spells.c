#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        x=a;
        if(b>c)
        {
            y=b;
        }
        else
        {
            y=c;
        }
    }
        else if(b>a && b>c)
        {
            x=b;
            if(a>c)
            {
                y=a;
            }
            else
            {
                y=c;
            }
        }
            else
            {
                x=c;
                if(a>b)
                {
                    y=a;
                }
                else
                {
                    y=b;
                }
            }
            printf("%d",x+y);
}