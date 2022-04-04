#include <stdio.h>
main()
{
    int x, y;
    printf("Enter an integer for x: ");
    scanf("%d", &x);
    printf("Enter an integer for y: ");
    scanf("%d", &y);
    printf("Integer x is %d", x);
    printf("\n");
    printf("Integer y is %d", y);
    printf("\n");
    if(x > y)
        printf("x is greater than y");
    else
        printf("y is greater than or equal to x");
}
