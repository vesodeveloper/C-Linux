#include<stdio.h>
#include "proto.h"
int main(void){
char ch; double fst,snd;
printf("Enter a sign: \n");
scanf("%c",&ch);
printf("Enter two double numbers: \n");
scanf("%2lf %2lf",&fst,&snd);
if(ch=='+'){
double res=add(fst,snd);
printf("%.lf \n",res);
}




}
