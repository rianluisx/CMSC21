// Rian Luis C. Mabait - CMSC 21 - Sec 2

#include <stdio.h>

int main(void){
    
    /* Declares these to be the name of the variables
    and specifies that these variables are type int */  
    int num1, denom1, num2, denom2, result_num, result_denom;

    /* Asks the user to enter the first fraction*/
    printf("Enter first fraction: ");

    // scans user input
    scanf("%d/%d", &num1,&denom1); // has 2 arguments, the format control string and the address operator.

    /* Asks the user to enter the second fraction*/
    printf("Enter second fraction: ");

    // scans user input
    scanf("%d/%d", &num2,&denom2); // has 2 arguments, the format control string and the address operator.


    // formula for the result of the numerator.
    result_num = num1 * denom2 + num2 * denom1;

    // formula for the result of the denominator.
    result_denom = denom1 * denom2;

    // prints the sum of the provided fractions but it isn't reduced to lowest terms.
    printf("The sum is %d/%d\n", result_num,result_denom);

    return 0;


}