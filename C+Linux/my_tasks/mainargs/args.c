#include<stdio.h>
int main(int argc, char ** argv){
printf("We have %d arguments:\n",argc);
int i;
for(i=0;i<argc;i++){
printf("Argument %d : %s\n",i,argv[i]);
}
return 0;
}
