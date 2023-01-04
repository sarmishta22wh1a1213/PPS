#include <stdio.h>
int main(){
	char colours;
	printf("fun with colours ");
	scanf("%c" &colours);
	switch (colours)
	case 'v':printf("violet\n")
		  break;
	case 'b': printf("blue\n")
		  break;
	case 'i': printf("indigo\n")
	          break;
	case 'g':printf("green")
		  break;
	case 'y':printf("yellow")
		 break;
	case 'o':printf("orange")
		 break;
	case 'r':printf("red")
		 break;
		 default: 
		 printf("colour not found");
return 0;
}

