#include <stdio.h>

int main()
{
    int numCount;
    int numbers[10];
   // int *pNumbers=&numbers;


    printf("Enter the number of elements to store in the array:");
    scanf("%d",&numCount);

   
    for(int i=0;i<numCount;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",numbers+i);
    }
    printf("\n");
    printf("The elements you entered are : \n");
    
    for(int i=0;i<numCount;i++)
    {
        printf("Element -%d: %d\n",i,*(numbers+i));
    }




    return 0;
}