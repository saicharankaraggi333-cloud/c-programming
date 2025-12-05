#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("Enter a,b values\n");
	scanf("%d%d",&a,&b);
	float r=a-(a/b)*b;
	printf("remainder=%f",r);
	return 0;
	
}
