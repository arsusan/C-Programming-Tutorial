//Wap to read an array of 20 integers and count total no's of even and odd elements.
#include<stdio.h>
int main()
{
    int arr[5],i,even=0,odd=0;
    printf("Enter integers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
printf("The total  even number is:%d \n The total  odd number is:%d\n ",even,odd);
    return 0;
}
