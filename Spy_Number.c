#include<stdio.h>
int main()
{
    int a,s=0,r,t,c=1;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        c=c*r;
        a/=10;
    }
    if(s==c) printf("Spy Number");
    else printf("Not Spy Number");
}