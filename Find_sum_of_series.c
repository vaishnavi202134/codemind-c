#include<stdio.h>
int main()
{
    float a,f,i,s=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        f=1/i;
        s=s+f;
    }
    printf("%.2f",s);
}