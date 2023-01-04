#include <stdio.h>
int main(){
	float cm ;
	printf("enter the distance in cm =");
	scanf("%f",&cm);
	float m = cm * 0.01 ;
	float k = cm * 0.001 ;
	printf("the value of distance in meters and kilometers is %f , %f \n", m , k);
}
