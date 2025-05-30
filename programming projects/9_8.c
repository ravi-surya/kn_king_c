//player wins if the sum of the dice is 7 or 11
//player loses if the sum is 2,3 or 12
//any other roll is called point and the game continues;
//on each subsequent roll, if i roll the point again i win
// will lose if i roll a 7 from the second roll onwards
//at the end of each game we ask whether the player wants to play again or not 


#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int roll_dice(void);
bool play_game(void);

int main()
{
srand((unsigned)time(NULL));

char c;
while(true)
    {
        printf("Enter 'y' or 'Y' to continue or start the game: "); 
        scanf(" %c",&c); 

        if(c != 'y' && c != 'Y') // Corrected: break if it's NOT 'y' AND NOT 'Y' i messed this up
        {
            break;
        }
        printf("You entered yes! Repeating...\n"); // Modified message

        if(play_game())
        {
            printf("you win!!! \n");

        }
        else 
        {
            printf("you lose!! \n");
        }
    }

}


int roll_dice(void)
{
    int x,y;

    x=(rand()%6)+1;
    y=(rand()%6)+1;
    printf("you rolled : %d\n",x+y);
    return x+y;
}

bool play_game(void)
{

    bool first_roll = true;

    int di = roll_dice();

    int point = di;

    if (di == 7 || di == 11)
    {
        return true;
    }
    else if (di == 2 || di == 3 || di == 12)
    {
        return false;
    }

    else
    {
        printf("you point is : %d\n", point);

        while (true)
        {
            int die = roll_dice();
            if (die == point)
            {
                return true;
            }
            else if (die == 7)
            {
                return false;
            }
        }
    }
}
