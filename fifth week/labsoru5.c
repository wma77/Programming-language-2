#include<stdio.h>

void swapnumbers(int *,int *,int *);

int main()
{
    int num1,num2,num3;

    printf("Element 1:");scanf("%d",&num1);
    printf("Element 2:");scanf("%d",&num2);
    printf("Element 3:");scanf("%d",&num3);

    swapnumbers(&num1,&num2,&num3);
    printf("\n");
    printf("Element 1:%d",num1);
    printf("Element 2:%d",num2);
    printf("Element 3:%d",num3);
    

    return 0;
}

void swapnumbers(int *x,int *y,int *z)
{
    int temp=*x;
    *x=*z;
    *z=*y;
    *y=temp;

}    
