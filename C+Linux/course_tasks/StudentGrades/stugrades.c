#include<stdio.h>
int main(void){
FILE *stu;
int i; int N; int br=0; int sum=0;int x; int num;
stu=fopen("studentGrades.txt","r");
fscanf(stu, "%d", &N );
for(i=0;i<N;i++)
{
fscanf(stu,"%d",&num);
sum=sum+num;
br++;
}    
x=sum/br;
double res=(double)x;
printf("%.2lf \n",res);
return 0;
}
