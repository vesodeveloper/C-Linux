#include<stdio.h>
int main(void){
FILE *fn;    
int N; int i; int fst; int arr[N];
fn=fopen("gradeComparison.txt","r");
while(fscanf(fn,"%d",&N)!=EOF)
{
for(i=1;i<N;i++)
{    
fst=arr[0];    
}}
printf("Fst num is: %d",fst);
return 0;
}
