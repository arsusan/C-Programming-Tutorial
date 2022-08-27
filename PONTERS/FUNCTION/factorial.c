//Wap to swap two values using functions call by reference.
#include<stdio.h>
int fac(int num);
int sum=1;
int main()
{
int num;

printf("Enter a number:");
scanf("%d", &num);

int a=fac(num);
printf("The factorial of %d number is :%d\n",num,a);
    return 0;
}
int fac(int num)
{
    int i;
    for(i=num;i>0;i--)
    {
  sum=sum*i;
    }
    
    return sum;
}
