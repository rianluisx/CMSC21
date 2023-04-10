#include <stdio.h>

int main(){

    int num, count, i; // declares as type int

    // asks for user input
    printf("Enter an integer n: ");
    scanf("%d", &num);

    // prints table format
    printf("\nTABLE OF POWERS OF 2\n");
    printf("n        2 to the n \n");
    printf("_ _ _    _ _ _ _ _ _\n\n");

    // sets count into 1
    count = 1;

    // for loop that calculates 2 to the nth power and prints in a tabular way.
    for (i = 0; i<=num; i++){
        printf("%3d        %3d\n", i, count); 
        count *=2;    
    } 
    return 0;

}