#include <stdio.h>
#define ROWS 9
#define COLUMNS 9

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

    while (i < ROWS){
        printf("%c ", 'a'+i);
        while (j < COLUMNS){
            i == 2 || j == 2 || i == 3 || j == 3 ? printf("[%d] \t", road_networks[i][j]) 
            : printf("%2d \t", road_networks[i][j]); 
        j++;
        }
    i++;
    j = 0;
    printf("\n");
    }

    int point;
    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I: \n");
    scanf("%d", &point);

    switch (point){
    case 0:
        printf("\nAt point: A\npoint: C is the nearest charging station");
        break;
    case 1:
        printf("\nAt point: B\npoint: C is the nearest charging station");
        break;
    case 2:
        printf("\nAt point: C\npoint: C is a charging station");
        break;
    case 3:
        printf("\nAt point: D\npoint: D is a charging station");
        break;
    case 4:
        printf("\nAt point: E\npoint: D is the nearest charging station");
        break;
    case 5:
        printf("\nAt point: F\npoint: C is the nearest charging station");
        break;
    case 6:
        printf("\nAt point: G\npoint: D is the nearest charging station");
        break;
    case 7:
        printf("\nAt point: H\nNo charging stations nearby");
        break;    

    case 8:
        printf("\nAt point: I\nNo charging stations nearby");      
    default:
        printf("\nMake sure to choose from the choices!\n");
        main();
        break;
    }


    return 0;
}
