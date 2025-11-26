#include<stdio.h>
int main()
{
	int p,t,r;
	float si;
	printf("enter simple intrest value");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("the simple intrest value %f",si);
	return 0;
}
