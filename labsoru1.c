#include <stdio.h>
#include <stdlib.h>

int element;
int *elementarray;

int main()
{
    printf("Enter how many elements:\n");
    scanf("%d",&element);


    elementarray=calloc(element,sizeof(int));

    for(int i=0;i<element;i++)
    {
        printf("Enter %d element:\n",i+1);
        scanf("%d",elementarray+i);
    }
    
    
    for(int i=0;i<element;i++)
    {
        if(*elementarray<*(elementarray+i))
            *elementarray=*(elementarray+i);
    }
    printf("The largest number:%d",*elementarray);
    return 0;
}

