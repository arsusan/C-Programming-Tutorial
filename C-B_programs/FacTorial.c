#include<stdio.h>
void main(){
    int Num,i,fac=1;;
    printf("Enter the number :");
    scanf("%d",&Num);
    printf("The factorual of %d is:",Num);
    for(i=Num;i>=2;i--)
    {
  fac=fac*i;
    printf("%d*",i);

    }
    printf("1!");
    printf("=%d",fac);
}