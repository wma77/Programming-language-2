#include <stdio.h>


int calculate(int num)
{
    if(num!=0)
    {
        return num%10 + calculate(num/10);
    }
    else
    {
        return 0;
    }
}


int main()
{
    
    int num,result;
    printf("Enter a number:");
    scanf("%d",&num);

    result=calculate(num);

    printf("Sum of digits:%d\n",result);

    


    return 0;
}