#include <stdio.h>

int calculateSum(int num)
{
    
    while (num!=0)
    {
        return num+calculateSum(num-1);
    }

    return num;
    
}

int main()
{
    int num;

    printf("Wrtie a number:");
    scanf("%d",&num);

    int sum=calculateSum(num);


    printf("Sum of the number:%d",sum);



    return 0;
}
