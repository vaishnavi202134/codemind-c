#include<stdio.h>
int main()
{
    int a,b,i,n,x,s;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        s=1;
        while(n>0)
        {
            x=n%10;
            if(x==0 || i%x!=0)
            {
                s=0;
                break;
            }
            n=n/10;
        }
        if(s==1) printf("%d ",i);
    }
}