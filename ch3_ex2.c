// Rian Luis C. Mabait - CMSC 21 - Sec 2

#include <stdio.h>

int main(void){
    
    /* Declares i and j as the name of the variables
    and specifies that these variables are type int and float respectively */ 
    int i;
    float x;

    /* Assigning values to these variables */
    i = 40;
    x = 839.21f;

    /* %d displays i in base 10 form
       %5d displays i in base 10 form with a min of 5 characters
       %-5d displays i with 5 spaces afterwards because the value of i doesn't require 5 cahracters
       %5.3d displays i in decimal form with min 5 characters overall and min of 3 digits. since i only has 2 digits, it will add another 0.
       %10.3f displays x in a fixed decimal form with 10 overall characters, and 3 digits after the decimal point.
       %10.3e displays x in exponential form with 10 overall characters, and 3 digits after the decimal point.
       %-10g displays x in either exponential or fixed decimal with 10 characters overall.
    

    */


    // prints |40|   40|40   |  040|
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    //prints |   839.210| 8.392e+002l|839.21    |
    printf("|%10.3f| %10.3el|%-10g|\n" , x, x, x); 

    /* Final Print Output
    |40|   40|40   |  040|
    |   839.210| 8.392e+002l|839.21    |
    
    
    
    */


    return 0;
}