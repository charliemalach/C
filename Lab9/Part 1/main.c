/*
Title: Part 1 - Complete Date 
Date: 3/22/22
@author cmalach1
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 3 //for dates

struct date {
    int month;
    int day;
    int year; 
};

int birthday_test(struct date, struct date); 


int main() 
{
    struct date today[SIZE];
    printf("Please enter the month: ");
    scanf("%d", &today->month);
    printf("Please enter the day: ");
    scanf("%d", &today->day);
    printf("Please enter the year: ");
    scanf("%d", &today->year);
    printf("Today's date is %d/%d/%d\n", today->month, today->day, today->year);    

    struct date birthday[SIZE];
    printf("Please enter the month: ");
    scanf("%d", &birthday->month);
    printf("Please enter the day: ");
    scanf("%d", &birthday->day);
    printf("Please enter the year: ");
    scanf("%d", &birthday->year);
    printf("Your birthday is %d/%d/%d\n", birthday->month, birthday->day, birthday->year); 

    if(today->month > birthday->month) //birthday has passed
    {
        printf("Your birthday has passed. Happy belated birthday!");
    }

    else if(today->month < birthday->month)
    {
        printf("Your birthday has not passed.");
    }

    else if(today->month == birthday->month) //birthday has passed (month)
    {
       if(today->day > birthday->day)
        {
        printf("Your birthday has passed. Happy belated birthday!");
        }
    }

    else
    {
        printf("Your birthday has not passed.");
    }
}
