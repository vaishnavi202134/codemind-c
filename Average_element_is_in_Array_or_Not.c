#include<stdio.h>
int main()
{
    int a,i,sum=0,b,flag=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg;
    avg=sum/a;
    for(i=0;i<a;i++)
    {
        if(avg==arr[i]) 
        {
            flag=1;
            break;
        }
    }
    if(flag==1) printf("True");
    else printf("False");
}