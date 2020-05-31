#include <stdio.h>
int main(void){
int N;int i;
char fname[]="mfile.txt";
FILE *F;
F=fopen(fname,"r");
fscanf(F,"%d",&N);
for(i=0;i<N;i++){
fscanf(F,"%d",&N);
printf("Element is: %d \n",N);
}
return 0;
}
