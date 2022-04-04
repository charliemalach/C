//part 1 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string[20];
    char string2[20];
    int result;
// testing fgets and puts 
    // printf("\nTesting fgets and puts");
    // printf("\nPlease enter a string: " );
    // fgets(string, 20, stdin);
    // printf("\nYou entered: ");
    // puts(string);

//testing strcpy() - copies string 
    // printf("\nTesting strcpy() ");
    // printf("\nPlease enter a string: " );
    // fgets(string, 20, stdin);
    // strcpy(string2, string);
    // printf("\nstrcpy() resulted in: ");
    // puts(string2);


// // //testing strcat() - concatenates 2 strings 
//     printf("\nTesting strcat() ");
//     printf("\nPlease enter string1: " );
//     fgets(string, 20, stdin);
//     printf("\nPlease enter string2: " );
//     fgets(string2, 20, stdin);
//     strcat(string, string2);
    
//     puts(string); // why is this printing on 2 lines?
    

// testing strcmp() - compares two strings 
    
    // printf("\nTesting strcmp() ");
    // printf("\nPlease enter string1: " );
    // fgets(string, 20, stdin);
    // printf("\nPlease enter string2: " );
    // fgets(string2, 20, stdin);
    // result = strcmp(string, string2);
    // printf("strcmp(string, string2) = %d\n", result);

//testing  strlen() - prints length of string 
    printf("\nTesting strlen() ");
    printf("\nPlease enter string1: " );
    fgets(string, 20, stdin);
    printf("The length of the string is: %zu \n", strlen(string) - 1); //why does it count 1 extra? 


//testing strstr() - looks for sub string 
    char haystack[20];
    char needle[20];
    char *ret;
    printf("\nTesting strstr() ");
    printf("\nPlease enter string1: " );
    fgets(haystack, 20, stdin);
    printf("\nPlease enter string2: " );
    fgets(needle, 20, stdin);
    ret = strstr(haystack, needle);
    printf("The substring is: %s\n", ret);
}


