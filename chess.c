#include <stdio.h>
#include <string.h>

//parameter for the tower movement
void mov_torre(int houses){ //recursivo function and variable houses

    if (houses > 0) //condition for the variable so it doesnt go lower than 0
    {
        printf("Right \n", houses); //prints the movement of the tower
        mov_torre(houses - 1); //decreases the atribute of the variable to reach a break point
    }
}

//parameter for the queen movement
void mov_queen(int houses){ //recursivo function and variable houses

    if (houses > 0) //condition for the variable so it doesnt go lower than 0
    {
        printf("Left \n", houses); //prints the movement of the queen
        mov_queen(houses - 1); //decreases the atribute of the variable to reach a break point
    }
}

int main(){
    
    //variables
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

        mov_torre(5); //add a limit to the movement of the piece

    break;

    case 2:
        //bishop movement (5 houses)

        for (int i = 5; i > 0; i--)
        {
            printf("Top");
            for (int j = 0; j < 1; j++) 
            {
                printf(" Right \n");
            }   
        }
        
        break;

    case 3:
        //queen movement

        mov_queen(8); //add a limit to the movement of the piece

        break;

    case 4:
        //horse movement
    
        for (int i = 2; i > 0 ; i--)
        {
            printf("Top\n");
            if (i == 1)
            {
                printf("Right");
            }
        }
        
        
        break;

    default:
        printf("No such piece exist in this chess");
        break;
    }


    return 0;
}