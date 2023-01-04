#include <stdio.h>
int main (){
	char c;
	printf("Hello!!\n Enter your character to check if it's digit alphabet or special character ");
	scanf("%c",&c);
	if (c<='z'&& c>='a')
		printf("It's a small alphabet ");
	else if (c<='Z' && c>='A')
		printf("It's a capital alphabet ");
	else
		printf("It is a special character");
	return 0;
}
