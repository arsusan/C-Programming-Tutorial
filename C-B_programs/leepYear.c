//Wap to find Leep year
#include<stdio.h>
void main(){
    int year;
    printf("Enter leep year:");
    scanf("%d",&year);
    if(year%4==0)
    printf("\n%d is a leep year:",year);
    else
    printf("\n %d year is not a leep year:",year);
}

