#include<stdio.h>
int main(int argc,char *argv[]){
int fst;
double snd;
double mul;
fst=atoi(argv[0]);
snd=atof(argv[1]);
mul=fst*snd;
if(snd==1){
printf("Invalid input.");
}
else {
printf("%d plants for %.2lf dollars each cost %.2lf dollars.",fst,snd,mul);
}
}
