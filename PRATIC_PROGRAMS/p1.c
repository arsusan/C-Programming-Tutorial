//Assending order
#include <stdio.h>
int main()
{
    int n, i, j, temp, num[30];

    printf("\n****Enter valu of N:****\n");
    scanf("%d", &n);

    printf("\n****Enter Numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("\nThe asending numbers are:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", num[i]);

    return 0;
}
