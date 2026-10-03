//program to count total number of alphabet , digits and symbols

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){
	char str[20];
	printf("enter string : ");
	gets(str);
	int i , alpha=0 , digit=0 , symbol=0 ;
	for(i=0; i<strlen(str); i++){
		if(isspace(str[i])){ continue; }
		else if(isalpha(str[i])){ alpha++; }
		else if(isdigit(str[i])){ digit++; }
		else { symbol++; }
	}
	printf(" alphabet=%d \n digit=%d \n symbol=%d",alpha,digit,symbol);
	return 0;
}

