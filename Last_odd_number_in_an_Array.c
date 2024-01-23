#include<stdio.h>
int main()
{
    int a,arr[a],i,on=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1) on=arr[i];
    }
    printf("%d",on);
}