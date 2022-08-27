/*Wap to print following shape with the help of loops. 
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{
    int col,i,j;
    printf("Enter Col:");
    scanf("%d",&col);
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
