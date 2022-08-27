/*.Wap To Find Out Simple Interest, Hence 
Ask To Enter The Values Of Principle,Rate,Time By User.*/
#include<stdio.h>
void main()
{
      int principle,time,rate,SI;

    printf("Enter principle:\n");
    scanf("%d",&principle);

      printf("Enter Time:\n");
       scanf("%d",&time);

         printf("Enter rate:\n");
          scanf("%d",&rate);

    SI=(principle*time*rate)/100;

    printf("Simple Intrest:%u",SI);
    }
 //program end: 