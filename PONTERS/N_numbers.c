//Wap to read 'n' numbers and add them using pointers
#include<stdio.h>
int main()
{
    int n,i,sum=0,*ptr;
      ptr=&sum;
    printf("Enter the number upto you want to print: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++)
    {
   *ptr=*ptr+i;
    }
    printf("\nThe sum of the given serige is :%d",sum);
    return 0;
}
