//Wap to calculate area & perimeter using call by reference.
//heder file for input output
#include<stdio.h>
//function definetion
void fun(float,float*,float*);
//main function
void main()
{
    //initializating variable
   float r,t,p;
//taking redios from user
   printf("Enter redios:");
   scanf("%f",&r);
   //function passing and calling
   fun(r,&t,&p);
   //printing area and perimetor
printf("\nArea:%d",t);
printf("\nperimetor:%d",p);
}
//function 1
void fun(float r,float *t,float *p)
{
    *t=3.14*r*r;
    *p=2*3.14*r;
}
//end of function
//program end:

