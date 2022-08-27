#include<stdio.h>
 #include<conio.h> 
 void main() 
 {
      int n,sum=0,a,old;
        
   printf("Enter a no:");
  scanf("%d",&n);
    old=n; 
  while(n!=0) 
         {
           a=n%10;
            n=n/10; 
         sum=sum+a*a*a;
          }
          if(sum==old)
           printf(" NUMBER IS ARMSTRONG");
            else 
            printf("NUMBER IS NOT ARMSTRONG"); 
            getch();
             }
             