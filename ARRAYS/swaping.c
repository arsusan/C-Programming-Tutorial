/* Wap to read two arrays of 10 integers and swap their values using third variable*/
#include<stdio.h>
int main()
{
int a[]={1,2,3};
int b[]={2,2,2};
 int i,temp[3];
 for(i=0;i<3;i++)
 {
     temp[i]=a[i];
     a[i]=b[i];
     b[i]=temp[i];
 }
 for(i=0;i<3;i++)
 printf("valu of a: %d \n",a[i]);
 printf("\n");
 for(i=0;i<3;i++)
 printf("valu of b: %d \n",b[i]);
return 0;
}

