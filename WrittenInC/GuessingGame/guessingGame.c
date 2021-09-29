#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100 +1;//Generates a number between 1 and 100
    // printf("The number is : %d\n",number);
    //Keep running the loop until the number is genrated
    do
    {
        printf("Guess the number betweeen 1 and 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else 
        {
            printf("You guessed it in %d attempts",nguess); 
        }
        nguess++;
    }while(guess!=number);

    return 0;
}