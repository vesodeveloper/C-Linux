#include<stdio.h>
#include "firstfunc.h"
int main(void){
double param;    
printf("Enter double num:");
scanf("%1lf",&param);
double fnum=square(param);
printf("\n");
printf("%.1lf",fnum);
}


