/*. Wap to read an array of 20 integers and count total 
no's of pos. and neg elements*/
#include<stdio.h>
int main()
{
    int arr[10],i,op=0,ne=0;
    printf("Enter intigers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
       op++;
        else
        ne++;
    }
    printf("Total opsetive number is:%d\nTotal negetive inumber is:%d\n",op,ne);
    return 0;
}

