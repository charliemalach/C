//working part 2
#include <stdio.h>    
double arrayFunction(int a[], int size); //array prototype 

int printArray(int arr[], int length) // function to print array
{
    for (int i = 0; i < length; i++) //prints each element of length of array 
    {     
        printf("%d ", arr[i]);     
    }    
}

int main() //main function 
{        
    int arr[] = {100, 200, 300, 400}; //hard codes the elements inside of array 
    int length = sizeof(arr)/sizeof(arr[0]);    
    printArray(arr, length);         
    
    return 0;    
}      


