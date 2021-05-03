#include<stdio.h>

int main()
{
int n,i,k,sum=0;
scanf("%d",&n);
scanf("%d",&k);
int t[n];
if(k<=10000000)
{
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		if(t[i]<=1000000000 && (t[i]%k==0))
		{
			sum=sum+1;
		}
	}
}
printf("%d",sum);
}
