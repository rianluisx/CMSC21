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
        if((i + day_of_week - 1) % 7 == 0){
            printf("\n");
        }
    }
}

int main(){
    

    int no_of_days, day_of_week;

    printf("\nEnter number of days in the month: ");
    scanf("%d", &no_of_days);

    switch (no_of_days){


    case 30: case 31: case 28: case 29:

        printf("\nEnter starting day of the week (1 = Sun, 7 = Sat): ");
        scanf("%d", &day_of_week);

        switch (day_of_week){
        case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            calendar(no_of_days, day_of_week);
            break;
        
        default:
            printf("Invalid starting day of the week!");
            main(); 
            break;
        }
        
        break;
    
    default:
        printf("\nInvalid no. of days entered!");
        main();
        break;
    }

}