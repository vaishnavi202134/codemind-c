#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=(a*2);i<=(a*2);i--)
    {
        if(i<2){
            break;
        }
        if(i%2==0) printf("%d ",i);
    }
}