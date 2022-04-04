//wokring part 1 
#include <stdio.h>

float arrayAvg(int a[], int n);

int main()
{
    const int STUDENTS = 5; //sets STUDENTS at constant of 5 
    int grades[STUDENTS];

    int i; 
    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter Person %d's grade: ", i+1); // ask for person one's grade 
        scanf("%d", &grades[i]); //scan user input for game
    }
    arrayAvg(grades, STUDENTS); //error with this code
}

float arrayAvg(int a[], int n)
{
    int i;
    float avg;
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = sum / ((float)n);
    printf("The average sore is %f.", avg);
    // return avg;
}