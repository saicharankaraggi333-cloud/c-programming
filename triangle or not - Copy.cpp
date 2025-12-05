#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("it is a triangle\n");
	}
	else{
		printf("it is not a triangle\n");
	}
	return 0;
 } 
