#include <stdio.h>

int product(int x, int y); //1. What is the purpose of this line?

main()
{

int a, b, c;

printf("Enter a number between 1 and 100: ");
scanf("%d", &a);
printf("Enter another number between 1 and 100: ");
scanf("%d", &b);

c = product(a, b);


printf("%d times %d = %d\n", a, b, c);

}

int product(int x, int y)
{
    return(x * y);
}
