/*
Title: Part 2 - Passing Structs to Functions 
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

int birthday_test(struct date *first, struct date *second); 

int birthday_test(struct date *first, struct date *second)
{
    if(first->month > second->month) //birthday has passed
    {
        return -1;
    }

    else if(first->month == second->month) //month is same 
    {
        if(first->day == second->day) // day is same 
        {
            return 0;
        }
    }
    else 
        return 1; //bday is in future 
}

int main() 
{
    struct date today[SIZE];
    printf("Please enter the month: ");
    scanf("%d", &today->month);
    printf("Please enter the day: ");
    scanf("%d", &today->day);
    printf("Today's date is %d/%d\n", today->month, today->day);    

    struct date birthday[SIZE];
    printf("Please enter the month: ");
    scanf("%d", &birthday->month);
    printf("Please enter the day: ");
    scanf("%d", &birthday->day);
    printf("Your birthday is %d/%d\n", birthday->month, birthday->day); 

    int ans = birthday_test(today, birthday);
    printf("birthday_test return value: %d", ans);
}
