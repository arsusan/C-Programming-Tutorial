//Wap to calculate Factorial using Pointer.
#include<stdio.h>
int main()
{
    int num,*ptr,sum=1;

    printf("Enter number:");
    scanf("%d",&num);

    ptr=&num;
    int i;
  printf("Factorial of %d is ::: ",*ptr);
    for(i=*ptr;i>1;i--)
    {
  sum=sum * i;
  printf("%d*",i);
    }
    printf("1! = %d",sum);
    return 0; 
}

