//swaping two numbers:
#include <stdio.h>
void swaPing(int *x, int *y);
void main()
{
int a,b;

printf("Enter valu for a : ");
scanf("%d",&a);

printf("Enter valu for b : ");
scanf("%d",&b);

swaPing(&a,&b);
printf("valu of a :%d\nvalu of b:%d\n",a,b);
  
}
void swaPing(int *x,int *y)
{
int temp;
temp =*x;
*x=*y;
*y=temp;
//return *x,*y;
}
