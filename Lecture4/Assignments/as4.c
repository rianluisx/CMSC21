#include <stdio.h>

int main(){

    int num, count, i;

    printf("Enter an integer n: ");
    scanf("%d", &num);

    printf("\nTABLE OF POWERS OF 2\n");
    printf("n        2 to the n \n");
    printf("_ _ _    _ _ _ _ _ _\n\n");

    count = 1;
    for (i = 0; i<=num; i++){
        printf("%3d        %3d\n", i, count); 
        count *=2;    
    } 
    return 0;

}