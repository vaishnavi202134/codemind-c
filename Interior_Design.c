#include<stdio.h>
int main()
{
    int x,y,z,q;
    scanf("%d%d%d%d",&x,&y,&z,&q);
    if((x+y)<(z+q))printf("%d",x+y);
    else printf("%d",z+q);
}