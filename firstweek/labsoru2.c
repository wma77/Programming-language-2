#include <stdio.h>

int calculateMass(int weight,int height)
{
    int body_mass=weight/(height*height);
    
    if (body_mass>=0 && body_mass<=18)
        return 1;
    else if (body_mass<=25)
        return 2;
    else if (body_mass<=30)
        return 3;
    else
        return 4;
}


int main()
{
    
    

    float weight,height;
    int body_mass;

    printf("What is your weight?");
    scanf("%f",&weight);

    printf("What is your height?");
    scanf("%f",&height);

    body_mass=calculateMass(weight,height);

    switch (body_mass)
    {
        case 1:printf("Zayif");break;
        case 2:printf("Normal");break;
        case 3:printf("kilolu");break;
        case 4:printf("obez");break;
    
    default:
        break;
    }




    return 0;
}