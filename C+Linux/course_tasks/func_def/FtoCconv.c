#include <stdio.h>

double ftoc(int);

double  ctof(int);


int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
 convertedtemp = ctof( usertemp); 
           printf(".%2lf\n",convertedtemp);

    } else if (unit=='F'){

    convertedtemp = ftoc( usertemp); 
    printf(".%2lf\n",convertedtemp);
        
    }

    return 0;

}

/* Function definitions below are provided for you*/

/* Conversion from Celsius to Fahrenheit: */
double ctof(int x){
    return((9.0/5)*x+32);
}

/* Conversion from Fahrenheit to Celsius: */
double ftoc(int x){
    return(5.0/9*(x-32));
}
