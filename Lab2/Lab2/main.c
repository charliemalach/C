#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radius, area;

    printf("Enter radius: ");
    scanf("%d", &radius);
    area = (int) (3.14159 * radius * radius);
    printf("Area = %d\n", area);
}
