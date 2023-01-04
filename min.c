#include<stdio.h>
void main()
{
int first_num,second_num,third_num;
first_num = 10;
second_num = 30;
third_num = 20;
if(first_num > second_num)
{
if(first_num > third_num)
printf("%d",first_num);
else
printf("%d",third_num);
}
else 
{
if(second_num > third_num)
printf("%d",second_num);
else
printf("%d",third_num);
}
return;
}

