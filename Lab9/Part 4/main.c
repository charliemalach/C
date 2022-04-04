/*
Title: Part 4 - Arrays of Structures 
Date: 3/22/22
@author cmalach1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 6 //6 books 

struct book {
    char title[50];
    int edition;
    float price; 
};

//function prototype
void printBooks(struct book bookstore[]);
void update(struct book bookstore[]);

//function to print bookstore
void printBooks(struct book bookstore[])
{
    printf("\n%-30s %5s %8s\n", "Title", "Edition", "Price");
    for(int i=0; i < SIZE; i++)
    {
        printf("%-30s %5d %10.2f\n", bookstore[i].title, bookstore[i].edition, bookstore[i].price);
    }
}


//function to update 
void update(struct book bookstore[])
{
    for(int i= 0; i<SIZE; i++)
    {
        //increases edition of book by 1 
        bookstore[i].edition+=1;
        //increases price of book by 10%
        bookstore[i].price = bookstore[i].price *1.10;
    }
}


int main() 
{
    struct book bookstore[SIZE] = {{"The Old Man and the C", 5, 10.00},
                                  {"C of Love", 3, 20.00},
                                  {"C Change", 4, 100.00},
                                  {"Out to C", 6, 500.00},
                                  {"Godzilla vs the C Monster", 2, 200.00},
                                  {"Beyond the C", 3, 300.00},
                                  };
    printBooks(bookstore);

    update(bookstore);
    
    printBooks(bookstore);

    return 0;
}






