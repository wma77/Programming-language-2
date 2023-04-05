#include<stdio.h>

int main()
{

    char string[25];
    char *pString=string;
    int length=0;
    printf("Enter a string:");
    fgets(string,25,stdin);

    while(*pString != '\0')
    {
        length++;
        pString++;
    }
    printf("The length of the given string:%d",length);






    return 0;
}