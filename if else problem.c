#include<stdio.h>
main()
{
	char n;
	printf("enter the value:",n);
	scanf("%d",&n);
	if(n%400==0,n%100==0,n%4==0)
	{
		printf("\n leap year");
	
	}
	else {
		printf("not a leap year");
	}
}
