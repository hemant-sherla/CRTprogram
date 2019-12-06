#include<stdio.h>
main()
{
	int n;
	printf("enter the value:",n);
	scanf("%d",&n);
	if(n>0)
	{
		printf("\n positive");
	}
	else if(n<0)
	{
		printf("\n negative");
	}
	else {
		printf("0");
	}
}
