//Wap to check a no. Is palindrome or not

#include<stdio.h>
void main(){
    int n,a,rev=0,old;
    printf("Enter a number:");
    scanf("%d",&n);
old=n;
do{
    a=n%10;
    n=n/10;
    rev=rev*10+a;
}while(n!=0);
n=old;
if(old==rev)
{
    printf("The number is palindrome:");
}else{
    printf("The number is not palindrome:");
}
}
