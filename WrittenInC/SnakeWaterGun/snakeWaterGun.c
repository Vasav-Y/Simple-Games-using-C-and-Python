#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun( char you, char comp)
{
    //returns 1 if you win , returns -1 if you lose and returns 0 if draw
    //Condition for draw
    //Cases covered
    //ss
    //ww
    //gg
    if(you == comp)
    {
        return 0 ;
    }

    //Non-draw conditions
    //sg
    //gs
    //sw
    //ws
    //gw
    //wg

    if(you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }

     if(you == 's' && comp == 'w')
    {
        return 1;
    }
    else if(you == 'w' && comp == 's')
    {
        return -1;
    }

    
     if(you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if(you == 'w' && comp == 'g')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 +1;
    
    if(number< 33)
    {
        comp = 's';
    }
    else if( 33 < number< 66)
    {
        comp = 'w';
    }
    else 
    {
        comp = 'g';
    }

    printf("Enter 's' for snake , 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you , comp);
    printf("You chose %c and computer chose %c.\n", you, comp);
    if(result == 0)
    {
        printf("Game draw!\n");
    }
    else if(result == 1)
    {
        printf("You won the game. ");
        printf("Congratulations!\n");
    }
    else 
    {
        printf("You lost  the game :( \n ");
        printf("Better luck next time \n");
    }
    return 0;
}