//compare two matrix:
#include<stdio.h>
int main()
{
int i,j,r,c,r1,c1;
printf("Enter row and colum of first matrix:\n");
scanf("%d %d",&r,&c);

printf("Enter row and colum of second matrix:\n");
scanf("%d %d",&r1,&c1);

int a[r][c],b[r1][c1],count=0;

if(r==r1&&c==c1)
{
 printf("Enter first Matrix:\n");  

 for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }

  printf("Enter second Matrix:\n");  

 for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(a[i][j]==b[i][j])
        {
             count++;
        }
       
    }
}
if(count==r+c)
{
    printf(" Given Matrix is Equal:\n");
}
else
{
    printf(" Given Matrix is not equal:\n");
}
}
else{
    printf(" Matrix cant be compared:\n");
}
    return 0;
}
