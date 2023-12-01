#include<stdio.h>
int main()
{
    int a,r,s=0;
    scanf("%d",&a);
    int t=a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a/=10;
    }
    if(t==s) printf("True");
    else printf("False");
}