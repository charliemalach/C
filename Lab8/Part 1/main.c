//part 1 
char *gets(char *s);

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char count, *ptr, *p;  // A loop counter and two pointers
    // Allocate a block of 35 characters. Store address in ptr
    ptr = (char *) malloc(35 * sizeof(char));
    if(ptr == NULL) {
        printf("Memory can't be allocated.\n");
        exit(0);
    }
    // Fill the string with values 65-90
    p = ptr;
    for(int i = 65; i <= 90; i++) {
        *p = i;
        p++;
    }
    // Displaying the string
    printf("String is:\n%s\n", ptr);
    return 0;
}





