/* wap to print
       *
      **
     ***
    ****
   *****
   */
  #include<stdio.h>
  int main()
  {
      int i,j,num,k,count=0;
      count=num-1;
      for(i=1;i<=5;i++)
    {
        //loop for space
        for(k=1;k<=count;k++)
        {
            printf(" ");
        }
        //for partten
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
     count--;
    }
      return 0;
  }
