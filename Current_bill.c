#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    if(a<=199) b=a*1.20, c=b+100; 
    else if(a>=200 && a<400) b=a*1.50 , c=b+100;
    else if (a>=400&& a<600) b=a*1.80,c=b+(b*0.15) ;
    else b=a*2.00, c=b+(b*0.15);
    printf("%.2f",c);
}