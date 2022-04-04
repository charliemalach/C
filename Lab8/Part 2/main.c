//part 1 
char *gets(char *s);

#include <stdio.h>
#include <stdlib.h>

char *copy(char *original) \
{
    int i, len = 0;
    char *result;
    while (original[len]) ++len;
    result = (char *) malloc(sizeof(char) * (len + 1));
    for (i = 0; i < len; ++i) {
        result[i] = original[i];
    }
    result[i] = '\0';
    return result;
}

int main() 
{
    char original_string[100], *copy_string;
    printf("Enter a string: ");
    scanf("%s", original_string);
    copy_string = copy(original_string);
    printf("Original string: %s\n", original_string);
    printf("Copy string: %s\n", copy_string);
    return 0;
}





