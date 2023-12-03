#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,i;
    scanf("%d",&n);
    int t=n+1;
    printf("%d ",a);
    for(i=3;i<=t;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
}