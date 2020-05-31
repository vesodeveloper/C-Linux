#include<stdio.h>
double addnum(double,double);
double minnum(double,double);
int main(void){
double fstnum;
double sndnum;
double res;
char sign;
printf("Enter two  double numbers:\n");
scanf("%1lf %1lf",&fstnum,&sndnum);
printf("Enter math sign:\n");
scanf("%c",&sign);
if(sign=='+'){
res=addnum(fstnum,sndnum);
printf("%.1lf",res);
}
else if(sign=='-'){
res=minnum(fstnum,sndnum);
printf("%.1lf",res);
}
return 0;
}
double addnum(double x,double y){
printf("Result is:\n");
return x+y;
}
double minnum(double x,double y){
printf("Result is:\n");
return x-y;
}
