 //Wap to check whether a no. Is prime or not
#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter number for n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
          }
        if(count==2)
        {
            printf("ITs a prime number:");
        }else{
            printf("It is not a prime number:");
        } 
}
