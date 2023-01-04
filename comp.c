#include <stdio.h>
int main(){
	int num1 , num2 ;
	printf("Enter the two numbers that you wanna compare ");
			scanf("%d %d", &num1 ,&num2);
			if (num1<num2)
			printf("%d is greater than %d",num2,num1);
			else if(num1>num2)
			printf("%d is greater than %d",num1,num2);
			else
			printf("both the numbers are equal");
			return 0;
			}
