/*
//. Wap to swap two variables using third variable.
#include<stdio.h>
int main()
{
 int a=10,b=20;
 int temp;
 printf("Before swap valu of A: %d \t valu of B:%d\n\n\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("After swap valu of A: %d \t valu of B:%d\n",a,b);
 return 0;
}

//swaping two variable without using third variable: 
#include<stdio.h>
void main()
{
    int a=20;
    int b=10;
    printf("Before swap:Valu of a is:%d\tValu of b is:%d\n\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
   printf("After swap:Valu of a is:%d\tValu of b is:%d\n\n",a,b); 
}
*/