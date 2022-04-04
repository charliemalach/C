//part 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int largest(int *x);
int smallest(int *x);

int main()
{
    const int MAX = 5;
    int array[MAX + 1], count;

    int randomnumber;
    srand(time(NULL));

    int i;
    for (i = 0; i < MAX; i++) //wite a forloop to populate the array with random ints from 1-10 
    {
        randomnumber = rand() % 10;
        array[i] = randomnumber;
        printf("%d ", array[i]);
    }
    array[MAX] = 0;
    printf("\n%d is the biggest number", largest(array));
    printf("\n%d is the smallest number", smallest(array));
}

int largest(int *x)
{
    int i = 0; 
    int biggest = *(x + 0);
    while (*(x + i) != 0)
    {
        if(biggest < *(x + i))
            {
                biggest = *(x + i);
            }
            i++;
    }
    return biggest; 
}

int smallest(int *x)
{
    int i = 0; 
    int smallest = *(x + 0);
    while (*(x + i) != 0)
    {
        if(smallest > *(x + i))
            {
                smallest = *(x + i);
            }
            i++;
    }
    return smallest; 
}