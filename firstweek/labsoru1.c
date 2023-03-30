#include <stdio.h>

int calculate(int numberOfStudent,int passingGrade)
{
    int marks[100];
    int failed;
    int passed;
     

    for(int i=0;i<numberOfStudent;i++)
    {
        printf("Enter the %d student marks:",i+1);
        scanf("%d",&marks[i]);

        if(marks[i]<passingGrade)
        {
            failed++;
        }

        passed+=marks[i];
    }
    printf("Average marks:%d\n",passed/numberOfStudent);
    return failed;

}

int main()
{
    int numberOfStudent;
    int passingGrade;

    printf("Enter number of students:");
    scanf("%d",&numberOfStudent);

    printf("Enter Passing Grade:");
    scanf("%d",&passingGrade);


    int failed=calculate(numberOfStudent,passingGrade);

    printf("Number of failed students:%d\n",failed);
    printf("Number of passed students:%d",numberOfStudent-failed);






    return 0;
}