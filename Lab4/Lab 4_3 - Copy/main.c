//working part 3
#include <stdio.h>

int main()
{
    int i,sum,max,min,avg,length; //declare all instance variables 

    printf("Please enter array length : \n");//asks user for array length 
    scanf("%d",&length);//scans array length from user input 

    int ara[length];

     printf("Enter array elements:\n");//asks user for elements to populate array of length "length"
     for(i = 0; i < length;  i++) //for loop to populate array 
     {
        scanf("%d", &ara[i]);//scans user input for array elements 
     }

    sum=0;//sets default sum to 0 
    max=ara[0];//sets max to the first element of array 
    min=ara[0];//sets min to the first element of array 
    
    for(i = 0; i < length; i++)
    {
        sum+=ara[i];
        if(ara[i] > max)
        {
            max = ara[i];
        }
        if(ara[i] < min)
        {
            min = ara[i];
        }
    }
    avg=sum/length;

    printf("Average is %d\n",avg);//prints the average of the array elements 
    return 0;
}