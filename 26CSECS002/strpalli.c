//program to find if a string is pallindrome or not

#include<stdio.h>
#include<string.h>
int main (){
	char str1[20];
	printf("enter string : ");
	gets(str1);
	char str2[20];
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0){
		printf("the string is a pallindrome");
	}
	else{ 
		printf("the string is not a pallindrome");
	}
	return 0;
}
