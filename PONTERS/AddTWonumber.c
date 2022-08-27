//Wap to read two no’s and add them by pointers
#include<stdio.h>
int main()
{
int a ,b,*p=&a,*q=&b;

printf("Enter valu of a :");
scanf("%d",&a);

printf("Enter valu of b :");
scanf("%d",&b);

printf("The sum of two number is:%d\n",*p + *q);

    return 0;
}
