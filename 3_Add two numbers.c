#include<stdio.h>

int main()
{
int t,i,a,b;
scanf("%d",&t);
if(t>0 && t<=1000)
{
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(a<=10000 && a>=0 && b<=10000 && b>=0)
		{
			printf("%d\n",a+b);
		}
	}

}
}
