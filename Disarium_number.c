#include<stdio.h>
#include<math.h>
int main()
{
	int y,n,m,a,b,c=0,s=0,v,z=0;
	scanf("%d",&n);
	y=n;
	m=n;
	while(n>0)
	{
		a=n%10;
		s=s*10+a;
		n/=10;
	}
	m=s;
	while(m>0)
	{
		b=m%10;
		c=c+1;
		v=pow(b,c);
		z=z+v;
		m=m/10;
	}
	if(y==z) printf("True");
	else printf("False");
}