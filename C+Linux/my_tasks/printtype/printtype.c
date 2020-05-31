#include<stdio.h>
int main(void){
char ch;    
printf("Enter a character:\n");
scanf("%c",&ch);
if(ch>=48 && ch<=57){
printf("You entered a integer number \n");
}
else if(ch>=65 && ch<=90){
printf("You entered capital leter  \n");
}
else if(ch>=97 && ch<=122){
printf("You entered non- capital leter \n");
}
else {
printf("You entered special character \n");
}
return 0;
}
