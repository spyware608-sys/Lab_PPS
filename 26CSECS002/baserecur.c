//program to print something on the screen for n times using recursion

void message();
#include <stdio.h>
int main(){
	int n;
	printf("enter number of recursion : ");
	scanf("%d",&n);
	message(n);
	return 0;
}
void message(int n){
	if(n>1)
		message(n-1);
	printf("26CSECS002\n");
}
