#include<stdio.h>
int main()
{
    int n,i;
    float s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%.2f",s/n);
}