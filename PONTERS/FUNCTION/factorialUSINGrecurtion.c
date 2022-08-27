// Wap to calculate factorial without Recursive Function.
#include<stdio.h>
#include<conio.h> 
int rec(int); 
/* function prototype*/
 void main() 
 {
    int a,fact;
  printf("\n Enter any number"); 
  scanf("%d",&a);
    fact=rec(a);
  printf("Factorial value=%d",fact);
  getch(); 
 }
int rec(int x)
 { 
    int f; if(x==1)
   return(1); 
     else
     f=x*rec(x-1);
     return(f); 
 }


