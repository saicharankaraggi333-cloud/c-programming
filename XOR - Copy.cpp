#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after a=%d,b=%d",a,b);
	return 0;
}
