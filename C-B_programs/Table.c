#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a Number:");
    scanf("%2d",&num);
    for(i=1;i<=num;i++)
    {
        int sum=num*i;
        printf("%d *%d=%2d\n",num,i,sum);
    }
    return 0;
}