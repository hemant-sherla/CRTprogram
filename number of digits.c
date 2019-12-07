#include<stdio.h>
main()
{
	int a;
	printf("\n enter a number");
	scanf("%d",&a);
	if(a<10)
	printf("\n single digit ");
	else if(a<100)
	printf("\n double digit");
	else if(a<1000)
	printf("\n tripple digit");
	else
	printf("\n 4 or more digits");
	
}
