#include<stdio.h>
#include "exmath.h"
int sumdigit(int n)
{
int snd=n/10%10;
int  fst=n/100;
int trd=n%10;
int nres=fst+snd+trd;
printf("Result is: \n");
return nres;
}
