#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    for(i=a-1;i<a;i--)
    {
        s=s+i;
        if(i<1) break;
    }
    printf("%d",s);
}