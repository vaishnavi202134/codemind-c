#include<stdio.h>
int main()
{
    int a,b,i,s=0,t=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
       if(a%i==0)  s=s+i;
    }
    for(i=1;i<=b;i++)
    {
       if(b%i==0)  t=t+i;
    }
    if(t==s && s==t) printf("Amicable");
    else printf("Not Amicable");
}