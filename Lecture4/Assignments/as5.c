#include <stdio.h>

void calendar(int no_of_days, int day_of_week){
    
    printf("\n");
    printf("  S   M   T   W  TH   F  SA\n");
    int i;

    // prints the spaces
    for (i = 1; i < day_of_week; i++){
        printf("    ");
    }


    // prints the calendar
    for (i = 1; i <= no_of_days; i++){
        printf("%3d ", i);

        // prints new line if it's divisible by the number of days in a week
        if((i + day_of_week - 1) % 7 == 0){
            printf("\n");
        }
    }
}

int main(){
    

    int no_of_days, day_of_week; // variable declaration

    // asks for number of days in month
    printf("\nEnter number of days in the month: ");
    scanf("%d", &no_of_days);

    // checks for errors
    switch (no_of_days){

    case 30: case 31: case 28: case 29:

        // asks for starting day of the week
        printf("\nEnter starting day of the week (1 = Sun, 7 = Sat): ");
        scanf("%d", &day_of_week);

        switch (day_of_week){
        case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            calendar(no_of_days, day_of_week); // function call
            break;
        
        default:
            printf("Invalid starting day of the week!");
            main(); // will call the main function if user inputted something out of the choice spectrum
            break;
        }
        
        break;
    
    default:
        printf("\nInvalid no. of days entered!");
        main(); // will call the main function if user inputted something out of the choice spectrum
        break;
    }

}