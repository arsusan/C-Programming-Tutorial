// WAP to find out whether a Entered no. Is Even Or Odd
#include<stdio.h>
void main(){
    int num;
    printf("Enter a number to know odd or even:");
    scanf("%d",&num);
    if(num%2==0)
    printf("The given number %d is Even:",num);
    else
    printf("The given number %d is Odd:",num);
}