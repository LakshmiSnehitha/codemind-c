#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c,d;
    scanf("%f%f",&c,&d);
    printf("%d %d
%.1f %.1f",a+b,a-b,c+d,c-d);
}