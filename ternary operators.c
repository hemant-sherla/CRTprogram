#include<stdio.h>
main()
{
	int n;
	printf("enter the value:",n);
	scanf("%d",&n);
	printf(n>0 ? "+ve" : n<0 ? "-ve" : "zero");
}
