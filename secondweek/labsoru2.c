#include <stdio.h>
int howManyNum;
int maxNum(int numberArray[])
{
    static int max=-9999;
    static int i=0;
    if(i<=howManyNum)
    {
        if (numberArray[i]>max)
            max=numberArray[i];
        i++;
        maxNum(numberArray);
    }

    return max;
}


int main()
{

    
    printf("How many numbers:");
    scanf("%d",&howManyNum);

    int numberArray[100];

    for(int i=1;i<=howManyNum;i++)
    {
        printf("Enter %d number: ",i);
        scanf("%d",&numberArray[i]);
    }

    int maxNumber=maxNum(numberArray);



    printf("This is the largest number:%d",maxNumber);





    return 0;
}

