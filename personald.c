#include <stdio.h>
int main(){
	

	char name[10], gender[6];
	int age;
	char dob[15];
	float salary ;

	printf("please enter your personal details\n");
	printf("NAME =  ");
	scanf("%s",name);

	printf("AGE =  ");
	scanf("%d",&age);

	printf("DATE OF BIRTH = ");
	scanf("%s",dob);

	printf("GENDER =  ");
	scanf(" %s",gender);

	printf("SALARY = ");
	scanf("%f",&salary);

	printf("YOUR PERSONAL DETAILS ARE AS FOLLOWs \n\n\n %s\n %d\n %s\n %s\n %f\n LPA",name,age,dob,gender,salary);
	return 0 ;



























































}
