#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mini=arr[0];
    for(i=1;i<n;i++)
    {
        if(mini>arr[i]) mini=arr[i];
    }
    printf("%d",mini);
}