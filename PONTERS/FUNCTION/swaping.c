//Wap to swap two values using functions call by value.
/*
#include<stdio.h>
void swap(int x,int y);
void main()
{
int a=10;
int b=20;


printf("Before swap Valu of a:%d\nvalu of b:%d\n",a,b);

swap(a,b);
}
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
  printf("After swap Valu of a :%d\nAnd b:%d",x,y);
}
*/
#include<stdio.h>
void swap(int *x,int  *y);
void main()
{
  int a,b;
//input first number :
  printf("Enter first number: ");
  scanf("%d",&a);
//input second number:
  printf("\nEnter second number:");
  scanf("%d",&b);
  //Before swap:
  printf("\nBefore swap:\nValu of a :%d\nValu of b :%d\n",a,b);
swap(&a,&b);
//after swap:
printf("\nAfter swap:\nValu of a :%d\nValu of b :%d\n",a,b);
  
}
//swaping function
void swap(int *x,int *y)
{
  int temp=*x;
*x=*y;
  *y=temp;
}
//End of function
