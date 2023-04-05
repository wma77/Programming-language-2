#include <stdio.h>

int main()
{
    char str[50];
    char *pStr=str;
    char r_str[50];
    char *pR_str=r_str;

    int length=0;
    printf("Enter a string:");
    fgets(str,50,stdin);

    while (*pStr != '\0')
    {
        length++;
        pStr++;
    }
    
    while (length>=0)
    {
       *pR_str=*pStr;
       pStr--;
       pR_str++;
       
       length--;
    }
    *pR_str='\0';
    printf("Reverse order of the string:%s",r_str);
    return 0;





    
}