// Wap to read time in hour,min,sec and convert it in to total seconds
#include<stdio.h>
int main()
{
    int hour,min,sec,totaSec;

    printf("Enter hour:\n");
    scanf("%d",&hour);

    printf("Enter min:\n");
    scanf("%d",&min);

    printf("Enter sec:\n");
    scanf("%d",&sec);
totaSec = (hour*3600)+(min*60)+sec;
printf("Total sec:%d",totaSec);
    return 0;
}