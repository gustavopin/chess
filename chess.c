#include <stdio.h>
#include <string.h>

int main(){
    
    //variables
    int tower_mov, bishop_mov, queen_mov; //variables for the chess piece that will store the movement
    char tower_dir[20], bishop_dir[20], queen_dir[20], horse_dir1[20], horse_dir2[20]; //variable to store the direction of the movement
    int chess_piece;

    //menu for choosing what piece to move
    printf("\n1 - Tower");
    printf("\n2 - Bishop");
    printf("\n3 - Queen");
    printf("\n4 - Horse");
    printf("\nChoose a piece to move: ");
    scanf("%d", &chess_piece);

    //switch command to make the menu interactive
    switch (chess_piece)
    {
    case 1:
        //tower movement
        //for inside a if in case the movement is bigger than 8
        //if tower_mov <= 8 the code will show you the selected movement
        //if tower_mov > 8 the code will stop and show you the message

        printf("\nNumber of movements for the tower: ");
        scanf("%d", &tower_mov);
        printf("\nDirection of movement for the tower(up, down, left or right): ");
        scanf(" %[^\n]", &tower_dir); //stores the direction of the movement with spaces

        if(tower_mov < 9){
            for (int i = 0; i < tower_mov; i++)
            {
                printf("\n%s", tower_dir);        
            }  
        } else{
            printf("\nmovement is too long");   
        }
        break;

    case 2:
        //bishop movement
        //same thing as the tower (for now)

        printf("\nNumber of movements for the bishop: ");
        scanf("%d", &bishop_mov);
        printf("\nDirection of movement for the bishop (down left, up left, down right or up right): ");
        scanf(" %[^\n]", &bishop_dir); //stores the direction of the movement with spaces

        if(bishop_mov < 9){
            for (int i = 0; i < bishop_mov; i++)
            {
                printf("\n%s", bishop_dir);        
            }  
        } else{
            printf("\nmovement is too long");   
        }
        break;

    case 3:
        //queen movement
        //same thing as the tower (for now)

        printf("\nNumber of movements for the queen: ");
        scanf("%d", &queen_mov);
        printf("\nDirection of movement for the quenn (up, down, left, right, down left, up left, down right or up right): ");
        scanf(" %[^\n]", &queen_dir); //stores the direction of the movement with spaces

        if(queen_mov < 9){
            for (int i = 0; i < queen_mov; i++)
            {
                printf("\n%s", queen_dir);        
            }  
        } else{
            printf("\nmovement is too long");   
        }
        break;

    case 4:
        //horse movement
        printf("\nMovement for the horse: If up/down, second must be left or right. If Left/right, second must be up or down");
        printf("\nFirst Direction of movement for the horse (up, down, left or right): ");
        scanf(" %s", horse_dir1); //stores the direction of the movement with spaces
        printf("\nSecond Direction of movement for the horse (up, down, left or right): ");
        scanf(" %s", horse_dir2); //stores the direction of the movement with spaces

        if(strcmp(horse_dir1, horse_dir2) != 0){ //this lines compares 2 strings because the second movement cannot have the same direction as the first movement
            for (int i = 0; i < 2; i++) //create a variable i for the external loop that will print the first direction of movement while i is lower than 2
            {
                printf("%s\n", horse_dir1); //the first direction comes before the second, so the print must be before the second loop

                for (int j = 0; j < i; j++) //creates a variable j that iquals 0, and will print the second direction of movement while j is lower than i
                {
                    printf("%s", horse_dir2);
                }
                
            }
        } else{
            printf("Movement can't be done");
        }
        break;

    default:
        printf("No such piece exist in this chess");
        break;
    }


    return 0;
}