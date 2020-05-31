#include <stdio.h>
#include "exmath.h"
int main(void){
int num;
printf("Enter number: \n");
scanf("%d",&num);
int fsum=sumdigit(num);
printf("%d",fsum);
return 0;

}
