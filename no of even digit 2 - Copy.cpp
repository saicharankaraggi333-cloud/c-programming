#include<stdio.h>
int main()
{
	int digit_count=0;
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(n>0){	
	int last_digit=n%10;
	if(last_digit%2==0)			
		digit_count++;
		n=n/10;
}
printf("%d",digit_count);
}
