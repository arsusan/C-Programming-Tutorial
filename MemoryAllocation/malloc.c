//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emp
{
    char name[20];
};
void main()
{
    struct emp *ptr;
    ptr = (struct emp *)malloc(sizeof(struct emp));

    if (ptr == NULL)
    {
        printf("Out of memory:");
    }
    else
    {
        printf("Enter emp details :");
        gets(ptr->name);
    }
    puts(ptr->name);
}
