#include <stdio.h>
int main(){
	int num ;
	printf("PLEASE ENTER THE NUMBER TO CHECK IF IT IS DIVISIBLE BY BOTH 5 AND 7 ");
	scanf("%d",&num);
	if((num%5 && num%7)==0)
		printf("The given number is divisible by both 5 and 7");
	else
		printf("oops... The number is not divisible by either 5 or 7 or both 5 and 7");
	return 0;
}
