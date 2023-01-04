#include <stdio.h>
int main (){
	char caps = 'A' ;
	char small = 'a' ;
	printf("Hello!\nWant to know the ASCII values of capital aplhabets?\nLets start!!!\n");
	while (caps<='Z' && caps>='A'){
		printf("%c %d\n",caps,caps);
		caps++;
	}
	while(small<='z' && small>='a'){
		printf("%c %d\n" ,small, small);
		small++;}
	return 0;
}
