#include<stdio.h>
#include<math.h>

void main()
{
float p = 2;
float r = 100;
float t = 3;
float c;
c = p* (pow(1+r/100),t);
printf("%f",c);
return;
}
