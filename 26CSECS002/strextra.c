#include<stdio.h>
#include<string.h>
int main (){
	int i ;
	char name[15]="string-value";
	char name2[4]="zzzz";
	printf("enter string : ");
	gets(name);
	puts(name);
//strlen
	int length= strlen(name);
	printf("string-length = %d",length);
	printf("\n\n");
//strcat
	strcat(name,name2);
	printf("%s \n\n",name);
//strcpy
	strcpy(name,name2);
	printf("%s \n\n",name);
//strlwr
	strlwr(name);
	printf("%s \n\n",name);
//strupr	
	strupr(name);
	printf("%s \n\n",name);
//strcmp
	int temp1= strcmp(name,name2);
	printf("%d \n\n",temp1);
//strrev
	char name3[15]= strrev(name);
	printf("%s",name3);
	return 0;
}
