/*wap to read marks of a student in five subjects of a college and calculate
 his total of marks and also calculate percentage.*/
#include<stdio.h>
int main()
{
   float s1,s2,s3,s4,s5,total,per;

    printf("Enter marks in bellow subject:\n");

    printf("\nMarks of English subject\n");
    scanf("%f",&s1);

    printf("\nMarks of computer subject\n");
    scanf("%f",&s2);

    printf("\nMarks of Math subject\n");
    scanf("%f",&s3);

    printf("\nMarks of Economics subject\n");
    scanf("%f",&s4);

    printf("\nMarks of Account subject\n");
    scanf("%f",&s5);

    total=s1+s2+s3+s4+s5;

    per=total/5;

    printf("Total number of student in Five subject is:%f\n",total);
    printf("Total persent Is:%f",per);

        return 0;
}