#include<stdio.h>
int main()
{
    int a,i,arr[a],b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1) b=i;
    }
    printf("%d",b);
}