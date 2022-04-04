//part 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void string_printer(char str[]);
void print_counter(char str[]);


void string_printer(char str[])
{
    int i;
    char *sp =  str;
    printf("%c  contains ", str);
    while (*sp != '\0')
    {
        printf("%c", *sp);
        sp++;
    }
    printf("\n");
}

void print_count(char str[])
{
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
    char string1[9] = "pizzalike";
    char string2[10] = "pizzalike";
    char string3[8] = "pizza";
    char string4[6] = "pizzas";
    char string5[] = {'\0'} ;
    int i;
    int j;
    print_count(string1);
    print_count(string2);
    print_count(string3);
    print_count(string4);
    print_count(string5);





    printf("\nstring1 contains ");
    for(i = 0; string1[i] !='\0'; i++)
    {
        printf("%c", string1[i]);
    }

    printf("\nstring2 contains ");
    for (i = 0; string2[i] !='\0'; i++)
    {
        printf("%c", string2[i]);
    }

    printf("\nstring3 contains ");
    for (i = 0; string3[i] !='\0'; i++)
    {
        printf("%c", string3[i]);
    }

    printf("\nstring4 contains "); 
     for(i = 0; string4[i] !='\0'; i++)
    {
        printf("%c", string4[i]);
    }

    printf("\nstring5 contains "); //uses while loop because it is not full string
    while (string5[j] !='\0')
    {
        printf("%c", string5[j]);
        j++;
    }  
}
