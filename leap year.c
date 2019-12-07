#include<stdio.h>
main()
{
	int a;
	printf("\n enter the value:");
	scanf("%d",&a);
	if(a%400==0 || a%100!=0 && a%4==0)
	printf("\n leap year");
	else
	printf("\n not a leap year ");
	

}
