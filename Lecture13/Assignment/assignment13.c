#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    } point1, point2;

    float *midpoint;
    float slope;
    float distance;
} l;

float solveSlope(struct line line1){
    
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x); // solves for the slope (y2-y1)/(x2-x1)
    // if slope turns out to be a negative 0, makes it
    if (slope == 0){
        return -slope;
    }
    return slope;

}
float *solveMidpoint(struct line line1){

    static float mid[2]; // static float arr that stores the x & y coordinates

    for (int i = 0; i < 2; i++){
        if (i == 0){
            mid[0] = (line1.point1.x + line1.point2.x) / 2; // calculates for x coordinate
        }
        if (i == 1){
            mid[1] = (line1.point1.y + line1.point2.y) / 2; // calculates for y coordinate
        }
    }
    return mid; // returns array
}


float solveDistance(struct line line1){
    float distance, Xordinates, Yordinates;
    Xordinates = (line1.point1.x - line1.point2.x); // (x1 - x2)
    Yordinates = (line1.point1.y - line1.point2.y); // (y1 - y2)
    distance = sqrt(pow(Xordinates, 2) + pow(Yordinates, 2)); // distance formula with use of pow function
    return distance; // returns distance
}


void getSlopeInterceptForm(struct line line1){
    float m,b;
    m = solveSlope(line1); // function call for solving slope
    b = line1.point1.y - m * line1.point1.x; // b = y - mx

    printf("Slope-Intercept Form (y = mx + b): y = %.1fx + %.1f", m, b);
}


int main(){

    // will loop until user says no
    while (1){

        // prompts user input
        printf("Enter x and y for point1: ");
        scanf("%f %f", &l.point1.x, &l.point1.y);

        printf("Enter x and y for point2: ");
        scanf("%f %f", &l.point2.x, &l.point2.y);

        printf("\nSlope = %.1f\n", solveSlope(l)); 
        
        float *mid = solveMidpoint(l); // function stored in address of mid to access the array
        printf("Midpoint = (%.1f, %.1f)\n", mid[0], mid[1]); // array subscripting to print repsective values

        printf("Distance = %.1f\n", solveDistance(l));

        getSlopeInterceptForm(l);

        int choice;

        printf("\n\nWould you like to continue? (1 -- YES || 2 -- NO): ");
        scanf("%d", &choice);

        if (choice == 1){
            printf("\n");
        }
        else if (choice == 2){
            break;
        }

    }

    return 0;


}