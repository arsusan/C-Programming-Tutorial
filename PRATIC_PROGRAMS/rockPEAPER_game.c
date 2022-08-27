//Rock Paper scissor game:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int game(char you, char computer)
{
    if (you == computer)
        return -1;
    else if (you == 'r' && computer == 'p')
        return 0;
    else if (you == 's' && computer == 'r')
        return 0;
    else if (you == 'p' && computer == 's')
        return 0;
    else if (you == 'p' && computer == 'r')
        return 1;
    else if (you == 'r' && computer == 's')
        return 1;
    else if (you == 's' && computer == 'p')
        return 1;
}

int main()
{
    //variable intlalaizing
    int n, i;

    int com = 0, user = 0;
    char you, computer, result;
    printf("\n\t\t........WEALCOME TO THE GAME:........!\n\n\t\t PRESS ENTER TO STARTED GMAE:\t\t\n");
    getchar();
    //begening of loop
    for (i = 0; i < 3; i++)
    {
        //Taking input from user
        printf("\n\n\n\t\t\t......Enter (r) for ROck.(p) for paper.(s) for scissor......\t\t\t\n");
        scanf(" %c", &you);

        //Takinng input from compuuter
        srand(time(NULL));
        n = rand() % 100;

        if (n < 33)
            computer = 'r';
        else if (n > 33 && n < 66)
            computer = 'p';
        else
            computer = 's';

        //declering function
        result = game(you, computer);
        //condition
        if (result == -1)
        {
            printf("\n\t......Both get one point!......\t\n");
            user += 1;
            com += 1;
            printf("\nUser=%d\n", user);
            printf("\ncom=%d\n", com);
        }
        else if (result == 0)
        {
            printf("\n\t....Node get s point.!....\n");
            com += 1;
            printf("\nUser=%d\n", user);
            printf("\ncom=%d\n", com);
        }
        else if (result == 1)
        {

            printf("\n\tYOU get  a pont!......!:\t\n");
            user += 1;
            printf("\nUser=%d\n", user);
            printf("\ncom=%d\n", com);
        }
        getchar();
    }
    //end of loop
    if (user > com)
    {
        printf("\n\tYOu win the GAME...':)'");
    }
    else if (com > user)
    {
        printf("\n\t...YOu lose!......':('");
    }
    else
    {
        printf("\n\t...OOPS!..GAME DRAW....");
    }
    printf("\n\n\t....Game end.....\t\n");
    return 0;
}
