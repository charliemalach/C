/*
Title: Part 3 - Character Arrays in Structures
Date: 3/22/22
@author cmalach1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct person { //define struct person 
    char first[50];
    char middle[2];
    char last[50]; 
} Person;

void print_count(char str[]) //counts number of letters in name (excluding spaces)
    char *sp =  str;
    int count = 0;
    while (*sp != '\0')
    {
        printf("%c", *sp);
        sp++;
        count++;
    }
    printf(" has a length of %d", count);
    printf("\n");
}

int main() 
{
    printf("Please enter first name: ");
    scanf("%s", Person.first);
    printf("Please enter middle initial: ");
    scanf("%s", Person.middle);
    printf("Please enter last name: ");
    scanf("%s", Person.last);

    printf("Your full name is %s %s. %s!\n", Person.first, Person.middle, Person.last);

    strcat(Person.first, Person.middle); //combines first name and middle initial 
    strcat(Person.first, Person.last); //combines first name, middle initial, and last name 
    print_count(Person.first); //prints size of full name 
}