#include<stdio.h>
int main()
{
    int a,s=0,r,i;
    scanf("%d",&a);
    while(a>0 || a<0)
    {
        r=a%10;
        s=s*10+r;
        a/=10;
    }
    printf("%d",s);
}