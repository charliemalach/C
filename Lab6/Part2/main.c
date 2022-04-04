//part 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    char string1[9] = "pizzalike";
    char string2[10] = "pizzalike";
    char string3[8] = "pizzalike";
    char string4[6] = "pizzalike";
    char string5[] = {'\0'} ;
    int i;
    int j;
    printf("string1 contains ");
    for(i = 0; string1[i] !='\0'; i++)
    {
        printf("%c", string1[i]);
    }

//warning breaks these 2 

        printf("string2 contains ");
    for (i = 0; string2[i] !='\0'; i++)
    {
        printf("%c", string2[i]);
    }

        printf("string3 contains ");
    for (i = 0; string3[i] !='\0'; i++)
    {
        printf("%c", string3[i]);
    }


    printf("\nstring5 contains ");
    for (j = 0; string5[j] !='\0'; j++)
    {
        printf("%c", string5[j]);
    }

    printf("\n");
    char *sp =  string2;
    while (*sp != '\0')
    {
        printf("%c", *sp);
        sp++;
    }

}
