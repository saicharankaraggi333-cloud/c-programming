#include<stdio.h>
int main()
{
	int U;
	printf("Enter U value\n");
	scanf("%d",&U);
	float charge,bill;
	if(U<=100)
	{
		charge=5.0;
	}
	else if("U>100 && U<=300")
	{
		charge=7.0;
	}
	else
	{
		charge=10.0;
	}
	bill=U*charge;
	printf("Units consumed=%d\n",U);
	printf("charge=%.2f\n",charge);
	printf("bill=%.2f\n",bill);
	return 0;
}
