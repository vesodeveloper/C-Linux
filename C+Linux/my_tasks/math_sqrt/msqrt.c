#include<stdio.h>
int main(void){
double num;
printf("Enter double number:\n");
scanf("%1lf",&num);
double res=sqrt(num);
printf("Result is\n:");
printf("%.1lf\n",res);
return 0;
}

