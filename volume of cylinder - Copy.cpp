#include<stdio.h>
#include<math.h>
int main()
{
	int r,h;
	const float pi=3.14;
	printf("Enter r,h values\n");
	scanf("%d%d",&r,&h);
	float v=pi*r*r*h;
	printf("the volume of cylinder =%.2f",v);
	return 0;
}
