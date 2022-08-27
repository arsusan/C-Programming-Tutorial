//ltiplication of two matrix:
#include <stdio.h>
int main()
{

    int i, j, k, row1, col1, row2, col2;
    int sum = 0;

    printf("Enter row and colum of first matrix:\n");
    scanf("%d %d", &row1, &col1);

    printf("Enter row and colum of second matrix:\n");
    scanf("%d %d", &row2, &col2);

    int a[row1][col1], b[row2][col2], mul[row1][row2];

    //if condition
    if (col1 == row2)
    {
        printf("Enter first Matrix:\n");
        //loop for takin input of first matrix
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        //end of first loop
        printf("Enter second matrix:\n");
        //loop for takin input of second matrix
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        //end of second loop
        //mltiplication of matrix
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                for (k = 0; k < row2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                mul[i][j] = sum;
                sum = 0;
            }
        }
        //end of loop
        printf("ltiplication of Above matrix is :\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("NOT possible with given rows and colum:\n");
    }
    return 0;
}
