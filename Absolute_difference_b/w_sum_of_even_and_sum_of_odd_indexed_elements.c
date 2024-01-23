#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,es=0,os=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0) es=es+arr[i];
        else os=os+arr[i];
    }
    printf("%d",abs(es-os));
}