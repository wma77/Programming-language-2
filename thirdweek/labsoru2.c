#include <stdio.h>
#include <string.h>

int tekSayi(int *A,int b)
{
    if(b>=1)
        if (A[b-1]%2==0)
            return tekSayi(A,b-1);
        else
            return 1+tekSayi(A,b-1);
    else

        return 0;   
}


int main()
{
    int dizi[]={1,2,3,4,5,6,7,8,9};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);

    printf("tek sayi adedi : %d",tekSayi(dizi,boyut));
}
