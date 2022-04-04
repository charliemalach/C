#include <stdio.h>

int product(int x, int y){
return x*y;
}

int power(double base, int exp){
    int pow = 1L;

    for(int i = 0; i < exp; i++){
         pow = product(pow, base);
    }
    return pow;
}

int main(void)
{
int base;
int exp;

printf("Enter a base: ");
scanf("%d", &base);

printf("Enter an exponent: ");
scanf("%d", &exp);

printf("%d to the power %d = %d", base, exp, power(base, exp));
return 0;
}

