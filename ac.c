#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	float ac,acc;
	printf("enter r values");
	scanf("%f%f",&ac,&acc);
	ac=3.14*r*r;
	acc=2*3.14*r;
	printf("area of circle is:%f\n",ac);
	printf("area of circumference is:%f",acc);
	return 0;
}
	
