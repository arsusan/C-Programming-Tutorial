//Wap to print FIBBONACCI series.
#include<stdio.h>
int main()
{
    int a=1,b=0,c=0,n,i;
printf ("Enter how many terms u want to print series:");
scanf("%d",&n);

    for (i=1;i<=n;i++) 
    {
        printf("%d",c);
         c=a+b;
          a=b; 
        b=c;
        }
    return 0;
}
