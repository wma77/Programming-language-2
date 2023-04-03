#include<stdio.h>


int main()
{
    int num1,num2;
    

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter Second number:");
    scanf("%d",&num2);

    int *PNum1=&num1;
    int *PNum2=&num2;

    int total=*PNum1+*PNum2;

    printf("The total of two numbers:%d",total);

    return 0;
}
