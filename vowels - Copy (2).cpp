#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character\n");
	scanf("%c",&ch);
	if(ch='a'||ch='e'||ch='i'||ch='o'||ch='u')
	{
	printf("the alphabet is vowel");
    }
    else
	{
		printf("the alphabet is not vowel")
	}
	return 0;
}
