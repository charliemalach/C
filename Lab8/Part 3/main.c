#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strcat(const char *str1, const char *str2)
{
    size_t s1, s2, s3, i = 0;
    char *a;

    s1 = strlen(str1);
    s2 = strlen(str2);
    s3 = s1 + s2 + 1;
    a = malloc(s3);

    while (*str1 != '\0')
    {
        a[i] = *str1;
        str1++;
        i++;
    }
    while (*str2 != '\0')
    {
        a[i] = *str2;
        str2++;
        i++;
    }

    a[i] = '\0'; // Here i = s1 + s2

    return a;
}

int main(void)
{
    char s1[50], s2[50];
    printf("\nEnter first string: ");
    scanf("%s", s1);
    printf("\nEnter second string: ");
    scanf("%s", s2);

    char *str = my_strcat(s1, s2);
    printf("Original strings are %s and %s \n", s1, s2);
    printf("Concatenated string is %s\n", str);

    return 0;
}