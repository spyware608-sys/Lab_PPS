//program to count total number of alphabet , digits and symbols

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){
	char str[20];
	printf("enter string : ");
	gets(str);
	int i;
	for(i=0; i<strlen(str); i++){
		if(isupper(str[i])){ str[i]=tolower(str[i]); }
		else{ str[i]=toupper(str[i]); }
	}
	puts(str);
	return 0;
}

