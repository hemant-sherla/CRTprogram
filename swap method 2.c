// swaping of two variables

#include<stdio.h>
main()
{
	int a,b,;
	printf("\n enter the values");
	scanf("%d%d",&a,&b);
	printf("\n before swap a=%d \t b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swaping a=%d \t b=%d",a,b);
}
