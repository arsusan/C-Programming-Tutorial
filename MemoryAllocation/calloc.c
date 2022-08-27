//callocfunction
/*memoryAllocation to array


 void* calloc(size_t n,size_t size)

size_t n ->size of array
size_t size ->size of each element in array

on sucess,returns address of memory block
on failure,returns null pointer */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, *arr, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
        printf("no memory\n");
    else
    {
        printf("Array elements are:");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(arr + i));
        }
    }
}
