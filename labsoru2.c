#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char *str;

    str=(char*)malloc(20*sizeof(char));

    if(str==NULL)
        printf("Error");
    else
        strcpy(str,"Wai Moe Aung");


    printf("Your name is:%s",str);
    free(str);














    return 0;
}