#include<stdio.h>
int main()
{
	int l,b;
	float r;
	printf("enter length and breadth value");
	scanf("%d%d",&l,&b);
	r=2*(l+b);
	printf("the perimeter of rectangle %f",r);
	return 0;
}
