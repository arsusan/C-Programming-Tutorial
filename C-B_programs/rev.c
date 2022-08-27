//. Wap to reverse of a given no.
#include<stdio.h>
int main()
{
    int n,rev=0,a;
    printf("Enter number :");
    scanf("%d",&n);
    while(n!=0)
    {
       a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("Reverse Number :%d\n",rev);
    return 0;
}
