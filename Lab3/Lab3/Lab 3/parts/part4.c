#include <stdio.h>
#include <stdlib.h>
#include <time.h>



main()
{
    int guess,number,x;

    number = rand() % (1000 + 1 - 1) + 1;

    printf("The number is: %d", number);
    printf("\n");

    guess = scanf("%d", &x);
    printf("%d", guess);
    printf("\n");


    while(guess != number){

        if(guess < number)
        {
        printf("You guessed too low");
        printf("\n");
        guess = scanf("%d", &x);
        }
        else if(guess > number)
        {
        printf("You guessed too high");
        printf("\n");
        guess = scanf("%d", &x);
        }
        else
        {
        printf("Correct");
        }
    }
}

