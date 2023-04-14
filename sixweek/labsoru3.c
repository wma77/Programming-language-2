#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char *str;

    str=(char*)malloc(10*sizeof(char));

    if(str==NULL)
        printf("Error");
    else
        strcpy(str,"Mohamed");

    str=(char*)realloc(str,20*sizeof(char));

    strcpy(str,"Mohamed Tarik");
    
    printf("Your name is:%s",str);
    free(str);

    return 0;

}





