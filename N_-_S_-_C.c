#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        if(i>a) printf("%d %d %d
",i,i*i,i*i*i);
    }
}