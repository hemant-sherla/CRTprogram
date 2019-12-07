#include<stdio.h>
main()
{
	int n,r,sum,temp;
	printf("\n enter number");
	scanf("%d",&n);
	sum=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
		printf("\n pallndrome ");
	else
		printf("not a pallndrome");

}
