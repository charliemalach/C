//part 3
#include <stdio.h>
int main()
{
   const int SIZE = 100; 
   int intarray[SIZE];
   float floatarray[SIZE];
   double doublearray[SIZE]; 


   printf("\nSize of int = %zu bytes", sizeof(int));
   printf("\nSize of intarray = %zu bytes", sizeof(intarray));

   printf("\n\nSize of float = %zu bytes", sizeof(float));
   printf("\nSize of floatarray = %zu bytes", sizeof(floatarray));

   printf("\n\nSize of double = %zu bytes", sizeof(double));
   printf("\nSize of doublearray = %zu bytes", sizeof(doublearray));
}
