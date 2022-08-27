//swaping two variable
#include<stdio.h>
//main function
int main()
{
    //declaring variable and initializing valu
int a=10,b=20,*p1,*p2,c;
//before swapig
printf("Before swapig:\nValu of a is:%d\nValu of B is:%d\n",a,b);
//psaving addresses of vriables a  and b in pointer p1 and p2
p1=&a;
p2=&b;
//swapig
c=*p1;
*p1=*p2;
*p2=c;
//After swapig
printf("After swapig:\nValu of a is:%d\nValu of B is:%d\n",a,b);
    return 0;
}
//program end:
