#include<stdio.h>
//Basic calculetor to add,sub,mun,div two valu
int  main()
{
int a,b;
char op;
printf("Enter First Valu:");
scanf("%d",&a);
printf("Choose a oparetor:");
 scanf(" %c",&op);
printf("Enter Second valu:");
scanf("%d",&b);
switch(op)
{
    case'+':
    printf("Answer is :%d\n",a+b);
    break;
    case'-':
    printf("Answer is :%d\n",a-b);
    break;
    case'*':
    printf("Answer is :%d\n",a*b);
    break;
    case'/':
    printf("Answer is :%d\n",a/b);
    break;
default:
printf("Invalid opreator:");
}

return 0;
}