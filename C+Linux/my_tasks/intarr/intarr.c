#include<stdio.h>
int main(void){
int n;  int i; int br=0; int sum=0; int pr=1;   
printf("Enter max num:\n");
scanf("%d",&n);
int arr1[n];
printf("Enter elements of array \n");
for(i=1;i<=n;i++){
scanf("%d",&arr1[i]);
br++;
sum=sum+arr1[i];
pr=pr*arr1[i];
}
printf("Count is: %d \n",br);
printf("Sum is: %d \n",sum);
printf("Mul is: %d \n",pr);
return 0;
}
