//Wap to read an array of 20 integers and print sum of all Entered no.'s.
#include<stdio.h>
int main()
    {
int arr[20];
 int sum=0,i;
printf("Enter integers :\n");
for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("Sum of the integers is :%d",sum);
return 0;
    }


