#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int *ele;
    int count;
    int newCount;

    printf("Enter a number for array:");
    scanf("%d",&count);
    ele=(int*)malloc(count*sizeof(int));

    for(int i=0;i<count;i++)
    {
        printf("Enter a element:");
        scanf("%d",(ele+i));
        
    }
    printf("Enter a new number for array:");
    scanf("%d",&newCount);
    ele=(int*)realloc(ele,newCount*sizeof(int));

    for(int i=count;i<newCount;i++)
    {
        printf("Enter a element:");
        scanf("%d",(ele+i));
    }

    for(int i=0;i<newCount;i++)
    {
        printf("Element %d:%d\n",i+1,*(ele+i));
    }












    return 0;
}