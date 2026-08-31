Program-2-Write a program to make use of basic
          Input/Output functions using differnt 
         types
Solution(2)- User deifine values*/ 

#include <stdio.h>

int main() 
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Roll Number:");
    scanf("%d",&rollnum);
    printf("Enter Student Percentage:");
    scanf("%f",&per);
    printf("\nEnter Student Grade:");
    scanf("%c",&grade);

    printf("\n_____Student Information_____\n");
    printf("\nRoll Number is:%d",rollnum);
    printf("\nPercentage is:%f",per);
    printf("\nGrade      :%c",grade);

    return 0;

}

    