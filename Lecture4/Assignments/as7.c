#include <stdio.h>
#define ROWS 9
#define COLUMNS 9
#define length_of_road_networks ((int) (sizeof(road_networks) / sizeof(road_networks[0]))) // bonus 

int main(){

    int road_networks[ROWS][COLUMNS] = {
        {1,1,0,0,0,1,0,0,0},
        {1,1,1,0,0,0,0,0,0},
        {0,1,1,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0,0},
        {0,0,0,1,1,0,0,0,0},
        {1,0,1,0,0,1,0,0,0},
        {1,0,0,1,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1},
        {0,0,0,0,0,0,0,1,1}
     
     };

    printf("\n================= THE ADJACENCY MATRIX =================\n\n");
    printf("   a     b       c       d       e       f       g       h       i\n\n");


    int i = 0; 
    int j = 0;

    // initializes the adjancy matrix with brackets on [c] & [d].
    while (i < length_of_road_networks){
        printf("%c ", 'a'+i);

        // checks if the iteration is at row and col 2 and 3. Also prints the adjancy matrix with brackets on [c] & [d].
        while (j < length_of_road_networks){
            i == 2 || j == 2 || i == 3 || j == 3 ? printf("[%d] \t", road_networks[i][j]) 
            : printf("%2d \t", road_networks[i][j]); 
        j++;
        }
    i++;
    j = 0;
    printf("\n");
    }

    int point;
    printf("\n============= APPROACH NO. 1 ==============\n");

    // user input
    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I: \n");
    scanf("%d", &point);

    // aproach 1 by using a switch statement to know the closest charging station when looking at the graph.  
    switch (point){
    case 0:
        printf("\nAt point: A\npoint: C is the nearest charging station\n");
        break;
    case 1:
        printf("\nAt point: B\npoint: C is the nearest charging station\n");
        break;
    case 2:
        printf("\nAt point: C\npoint: C is a charging station\n");
        break;
    case 3:
        printf("\nAt point: D\npoint: D is a charging station\n");
        break;
    case 4:
        printf("\nAt point: E\npoint: D is the nearest charging station\n");
        break;
    case 5:
        printf("\nAt point: F\npoint: C is the nearest charging station\n");
        break;
    case 6:
        printf("\nAt point: G\npoint: D is the nearest charging station\n");
        break;
    case 7:
        printf("\nAt point: H\nNo charging stations nearby\n");
        break;    

    case 8:
        printf("\nAt point: I\nNo charging stations nearby\n");
        break;      
    
    default:
        printf("\nMake sure to choose from the choices!\n");
        main(); // asks the user again to input a valid choice.
        break;
    }

    // approach 2, using a for loop

    // user input
    printf("\n============= APPROACH NO. 2 ==============\n");

    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I: \n");
    scanf("%d", &point);

    printf("\nAt point: %c\n", 'A' + point); // prints the point

    // checks for errors
    if (point > 8 || point < 0){
        printf("\nPlease choose from the choices only!\n");
        main();
    }

    for (int i = 0; i < length_of_road_networks; i++) {

      if (point == 2){
        printf("\npoint: C is a charging station."); // if point is at the index of c which is 2, prints that the user has arrived on a charging station
        break;
      }
      else if (point ==3){
        printf("\npoint: D is a charging station"); // if point is at the index of d which is 3, prints that the user has arrived on a charging station
        break;
      }

      else if (point == 7){
        printf("\nH has no nearby charging stations"); // if point is at index of h which is 7, prints that h has no nearby charging stations
        break;
      }

      else if (point == 8){
        printf("\nI has no nearby charging stations"); // if point is at index of i which is 8, prints that i has no nearby charging stations
        break;
      }

      // checks if user input is not at index 2,3 or 8.
      else if (i == point){

        for (int j = i; j <= length_of_road_networks; j++){
        
        // checks if there is a one way path between a point and c
          if (road_networks[j][2] == 1){ 
            printf("\npoint: C is the nearest charging station"); 
            break;
          }

         // checks if there is a one way path between a point and d
          else if (road_networks[j][3] == 1){
            printf("\npoint: D is the nearest charging station");
            break;
          }
          else {
            continue;
          }

        }
      }
    }
  
    return 0;


    
}
