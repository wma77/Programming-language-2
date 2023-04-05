#include <stdio.h>

int main()
{
    int numCount;
    int numbers[10];
    int sum=0;
   // int *pNumbers=&numbers;


    printf("Enter the number of elements to store in the array:");
    scanf("%d",&numCount);

   
    for(int i=0;i<numCount;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",numbers+i);
    }
    printf("\n");
    
    
    for(int i=0;i<numCount;i++)
    {   
       
        sum=sum+*(numbers+i);
    }
    printf("The sum of array is :%d",sum);




    return 0;
}