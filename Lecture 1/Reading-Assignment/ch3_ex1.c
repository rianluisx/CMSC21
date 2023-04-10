// Rian Luis C. Mabait - CMSC 21 - Sec 2


#include <stdio.h> // includes standard input output library functions

int main(void){

    /* Declares i and j as the name of the variables
    and specifies that these variables are type int */  
    int i, j;

    /* Declares x and y as the name of the variables
    and specifies that these variables is a type float */  
    float x, y;

    /* Assigning values to these variables */
    i = 10;
    j = 20; 
    x = 43.2892f;
    y = 5527.0f;


    /* Note that %d and %f serves as a placeholder that 
    indicates where the values would be printed.
    
    %d indicates that the variables to be printed are integers while
    %f indicates that the variables to be printed are floats. */


    // prints i = 10, j = 20, x = 43.289200, y = 5527.000000 in the terminal 
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); // "\n" prints a new line

    
    
    return 0;
}