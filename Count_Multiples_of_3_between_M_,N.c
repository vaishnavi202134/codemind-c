#include<stdio.h>
int main()
{
    int count=0,n,m,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0){
            count=count+1;
        }
    }
    printf("%d",count);
}