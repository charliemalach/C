#include <stdio.h>

//working part 1
#include <stdio.h>
int main()
{
    int i,avg,size; //declares instance variables 

    printf("Enter array length : \n"); 
    scanf("%d",&size);

    int ara[size];

     printf("Enter array elements:\n");
     for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
     }

    for(i = 0; i < size; i++){
        printf("Your array elements are %d\n",ara[i]);
        sum+=ara[i];
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }
    avg=sum/size;

    printf("Average is %d\n",avg);

    return 0;
}