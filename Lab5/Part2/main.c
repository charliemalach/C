//part 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int largest(int *x, int s);

int main()
{
    const int MAX = 5;
    int array[MAX], count;

    int randomnumber;
    srand(time(NULL));

    int i;
    for (i = 0; i < MAX; i++) //wite a forloop to populate the array with random ints from 1-10 
    {
        randomnumber = rand() % 10;
        array[i] = randomnumber;
        printf("%d ", array[i]);
    }
    
    printf("\n%d", largest(array, MAX));
}

int largest(int *x, int s)
{
    int i; 
    int biggest = *(x + 0);
    for (i = 0; i < s; i++)
    {
        if(biggest < *(x + i))
            {
                biggest = *(x + i);
            }
    }
    return biggest; 
}