#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int number, number_guessed, nbr_of_guesses = 0; //define all variables

    srand(time(0));
    number = rand() % 1000 + 1;

   // printf("%d", number);

    do
    {
        printf("Enter a number between 1 and 1000 :"); //print game beginning

        scanf("%d", &number_guessed); //scan user input for game
s
        nbr_of_guesses++; //sum guess

        if (number_guessed > number)
        {
            printf("Wrong! Guess Lower!\n\n"); //tell user they are wrong, high guess
        }
        else if (number_guessed < number)
        {
            printf("Wrong! Guess Higher!\n\n"); //tell user they are wrong, low guess
        }
        else
        {
            printf("\nCorrect! The number was %d. You guessed it in %d guesses!\n", number, nbr_of_guesses); //tell user they were correct and how many guesses it took
        }
    }while (number_guessed != number);

    return 0;
}
