#include<stdio.h>
#include<math.h>
int main(void){
int num;
double convnum;
double  sqrnum;
double expnum;
scanf("%d",&num);
convnum=(double)num;
sqrnum=sqrt(convnum);
expnum=exp(1);
printf("%.8lf\n",sqrnum);
printf("%.10lf\n",expnum);
printf("gcc program.c -lm -o pro"); 
return 0;
}
