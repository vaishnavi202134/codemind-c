#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==1) s=s+arr[i];
    }
    printf("%d",s);
}