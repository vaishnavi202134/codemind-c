#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    if(a%4==0) printf("%d",a/4);
    else printf("%d",(a/4)+1);
}