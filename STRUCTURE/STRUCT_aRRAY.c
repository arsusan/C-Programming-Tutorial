//structures using array
#include <stdio.h>
#include <string.h>
struct book
{
    int id, price;
    char name[20];
} n[3];
void main()
{
    int i, max = 3;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter  %d book Name :", i + 1);
        scanf("%s", n[i].name);

        printf("Enter  %d book price:", i + 1);
        scanf("%d", &n[i].price);

        printf("Enter  %d book id :", i + 1);
        scanf("%d", &n[i].id);
    }
    for (i = 0; i < max; i++)
    {
        printf("\nBook %dname =%s", i + 1, n[i].name);
        printf("\nBook %dname =%d", i + 1, n[i].id);
        printf("\nBook %dname =%d\n\n", i + 1, n[i].price);
    }
}
