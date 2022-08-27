//wap to add two 2*2 matrix:
#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
  int(*funptr)(int,int)=add;
printf("  //pointer function");
  printf("\nsum of two number is :%d\n",funptr(2,3));
printf("  //function");
  printf("\nThe sum of two number:%d",add(2,3));

    return 0;
}
