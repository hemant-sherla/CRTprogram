#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter a value:");
	scanf("%d%d%d",&a,&b,&c);
	printf(a==b && a==c ? "all are equal" :
	a>b && a>c ? "a is greater" : b>a && b>c ? "b is greater": "c is greater");
}
	
