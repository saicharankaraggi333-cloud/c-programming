#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter a,b values\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping a=%d,b=%d",a,b);
	return 0;
}
