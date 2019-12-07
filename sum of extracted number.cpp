#include<stdio.h>
main()
{
	int n,r,sum;
	printf("\n enter number");
	scanf("%d",&n);
	sum=0;
	while(n>0)
	{
		r=n%10;
	
		sum=sum+r;
		n=n/10;
	}
		printf("\n %d ",sum);
}
