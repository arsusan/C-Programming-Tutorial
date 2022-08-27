//wap to calculate square of no. with return type.
#include<stdio.h>
void main()
{
int num ;

printf("Enter number:");
scanf("%d", &num);

printf("\nThe square of %d is :%d",num,square(num));

}
int square(int number)
{
number=number*number;
return number;
}
