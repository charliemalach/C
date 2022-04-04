#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int number, guess_value, nbr_of_guesses = 0; //declares all variables

    srand(time(0));
    number = rand() % 1000 + 1; //sets random number to be between 1 and 100

    printf("%d", number); //prints the random number

    do {
        printf("Enter a guess between 1 and 1000 : ");

        scanf("%d", &guess_value); //scans input

        nbr_of_guesses++; //accounts for each time the loop is processed

        if (guess_value > number)
        {
            printf("Lower!\n\n");
        }
        else if (guess_value < number)
            printf("Higher!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it right in %d tries!\n", nbr_of_guesses);
        }

    } while(guess_of_value != number); //condition of the do while loop, runs until nbr_of_guesses == number.

    return 0;
}
