#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
srand((unsigned)time(NULL));
int number = rand() % 1000 + 1;;
    printf("The number is: %d", number);
    printf("\n");
    printf("The highest possible number is: %d", RAND_MAX );
}

