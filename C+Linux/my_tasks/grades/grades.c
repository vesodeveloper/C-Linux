#include <stdio.h>
int main(void){
int num;
FILE *mfile;
mfile=("myGrades.txt","a");
if(mfile==EOF){
fprintf(mfile,"%d",&num);
}
return 0;

}
