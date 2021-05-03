#include<stdio.h>
int main()
{
int n;
float m;
scanf("%d",&n);
scanf("%f",&m);
if(m>=0 && m<=2000 && n>0 && n<=2000)
{
	if((m-0.5)>n && (n%5==0))
	{
		m=m-n-0.5;
		printf("%.2f",m);
	}
	else
		printf("%.2f",m);
}
}