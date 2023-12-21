#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,es=0,os=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        if(ar[i]%2==0) es=es+ar[i];
        else os=os+ar[i];
    }
    if(os>es) printf("%d",os-es);
    else printf("%d",es-os);
}