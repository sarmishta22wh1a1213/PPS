#include <stdio.h>
int main(){
	char x,a,z,A,Z;
	printf("Please enter any letter ");
	scanf("%c", &x);
	if (x>=a && x<=z)
		printf("The given alphabet is in small caps");
	else if (x>=A && x<=Z)
		printf("The givem alphabet is in caps");
	else
		printf("The given character is not any alphabet");
	return 0;
}
