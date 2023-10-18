#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    scanf("%f",&bs);
    if (bs<=10000)
    {
     da=bs*0.8,hra=bs*0.2;
    }
    else if(bs<=20000)
    {
        da=bs*0.9,hra=bs*0.25;
    }
    else
    {
        da=0.95*bs,hra=0.3*bs;
    }
    gs=bs+da+hra;
    printf("%.2f",gs);
}