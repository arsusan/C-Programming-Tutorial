/*  Wap to read an array of 20 integers and store
 Addition of those arrays in to third array.*/
 #include<stdio.h>
 int main()
 {
     int a[5],b[5],sum[5],i;
     printf("Enter first array:\n");
     for(i=0;i<5;i++)
       scanf("%d",&a[i]);
       printf("Enter second array:\n");
     for(i=0;i<5;i++)
        scanf("%d",&b[i]);
        printf("Sum of two veriable::\n");
       for(i=0;i<5;i++)
       {
            sum[i]=a[i]+b[i];
       printf("%d\n",sum[i]);
       }

       return 0;
 }
