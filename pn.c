#include <stdio.h>
int main(){
	int num;
	printf("ENTER THE NUMBER WHICH YOU WANNA CHECK ");
	scanf("%d",&num);
	if(num>0)
		printf("NUMBER WHICH YOU HAVE ENTERED IS POSITIVE");
	else if(num=0)
		printf("NUMBER WHICH YOU HAVE ENTERED IS 0");
	else
		printf("NUMBER WHICH YOU HAVE ENTERED IS NEGATIVE");
	return 0 ;
}
