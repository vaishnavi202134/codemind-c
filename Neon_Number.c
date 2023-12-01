#include<stdio.h>
int main()
{
    int i,s=0,r=0,a,n;
    scanf("%d",&a);
    n=a*a;
    while(n != 0)
    {
        i=n%10;
        s=s+i;
        n/=10;
    }
    if(a==s) printf("Neon Number");
    else printf("Not Neon Number");
}