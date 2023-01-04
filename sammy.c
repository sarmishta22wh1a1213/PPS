#include <stdio.h>
void sam(){
	printf("hello how are you\nwant to learnm c language?\nLets learn\n ");
}
int main(){
	char name;
	printf("Hello, please enter your name :");
	scanf("%[^\n]%*c",name);
	printf("%s",name);
	sam();
	sam();
	sam();
return 0;
}
