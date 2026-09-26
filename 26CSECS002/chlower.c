//WAP to check wheather given character is lowercase or not

#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character : ");
	scanf("%c",&ch);
	if (ch >= 'a'&& ch<='z')
	{
		printf("the entered character is lowercased");
	}
	else printf("the entered character is not lowercased");
	
	return 0;
}
