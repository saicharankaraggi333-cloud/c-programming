#include<stdio.h>
int main()
{
	int units;
	printf("Enter units value\n");
	scanf("%d",&units);
	float uc,bill,charge;
	if(units<200)
	{
		uc=1.20;
	}
	else if(units>=200 && units<400)
	{
		uc=1.50;
	}
	else if(units>=400 && units<600)
	{
		uc=1.80;
	}
	else
	{
		uc=2.0;
	}
	bill=units*uc;
	if(bill<=400)
	{
		charge=100;
	}
	else
	{
		charge=bill*0.15;
    }
    float total_amount=bill+charge;
	printf("unit harge=%f\n",uc);
	printf("bill=%f\n",bill);
	printf("charge=%f\n",charge);
	printf("Total amount=%.2f",total_amount);
	return 0;
}
