#include<stdio.h>
int main(void){
FILE *fl; int num; int x; int i; int y;
fl=fopen("mfile.txt","a");
do{
printf("Enter number: \n");
scanf("%d",&num);
if(num!=-1){
fprintf(fl,"%d ",num);
}}while(num!=-1);
fclose(fl);
fl=fopen("mfile.txt","r");
fscanf(fl,"%d",&x);
for(i=0;i<x;i++){
    fscanf(fl,"%d",&y);
    printf("%d \n",y);
}
fclose(fl);
return 0;
}    
