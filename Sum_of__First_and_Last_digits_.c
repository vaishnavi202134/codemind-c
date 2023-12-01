#include<stdio.h>
int main()
{
    int a,i,s=0,r,t;
    scanf("%d",&a);
    r=(a%10);
    while(a>=10)
    {
        a=a/10;
    }
    printf("%d",a+r);
}
