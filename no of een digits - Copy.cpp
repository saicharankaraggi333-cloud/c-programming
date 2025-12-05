#include<stdio.h>
int main()
{
	int digit_count=0;
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(n>0) 
	{
		digit_count++;
		n=n/10;		
	if(digit_count%2==0)
		printf("%d\n",digit_count);
 }
	

}
