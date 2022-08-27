#include <stdio.h>
#include <string.h>
struct pointer
{
    char name[20];
    int age;
} n, *n1;
int main()
{
    n1 = &n;

    printf("\nEnter Name: ");
    gets(n.name);

    printf("\nEnter age: ");
    scanf("%d", &n.age);

    // printf("\nNAME=%s", n1->name);
    printf("\n\n");
    puts(n1->name);
    printf("AGE=%d\n", n1->age);

    return 0;
}
