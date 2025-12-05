#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && c==a)
	{
		printf("it is an equilateral triangle");
	}
	else if(a==b || c==a || b==c)
	{
		printf("it is an isoscales triangle");
	}
	else if(a!=b && b!=c && c!=a &&a+b>c && b+c>a && c+a>b)
	{
		printf("it is a scelene triangle");
	}
	else
	{
		printf("it is not a triangle");
	}
	return 0;
}
