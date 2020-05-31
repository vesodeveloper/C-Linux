#include<stdio.h>
int main(void){
FILE *fn; int T;
fn=fopen("wfile.txt","w");
do{
printf("Enter a integer: \n");
scanf("%d",&T);
if(T!=0){
fprintf(fn,"%d \n",T);
}
}while(T!=0);
return 0;
}
