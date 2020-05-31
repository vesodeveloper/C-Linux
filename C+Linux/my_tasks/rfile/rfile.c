#include<stdio.h>
int main(void){
FILE *mfile;
int i; int num;int N;
mfile=fopen("myf.txt","r");
fscanf(mfile,"%d",&N);
int arr[N];
for(i=0;i<N;i++){
printf("element is: %d \n",arr[i]);
}
fclose(mfile);
return 0;
}
