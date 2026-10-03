//program to count number of vowels in a given string

#include<stdio.h>
#include<string.h>
int main (){
	char str[20]="default string";
	printf("enter string : ");
	gets(str);
	strlwr(str);
	int i=0 , count=0;
	for(i=0; i<strlen(str); i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){ count++; }
	}
	printf("number of vowels in string : %d",count);
	return 0;
}
