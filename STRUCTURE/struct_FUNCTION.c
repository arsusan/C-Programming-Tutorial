// structure using Function
#include <stdio.h>
#include <string.h>
// struct Book
// {
//     char name[20];
//     int no;
// };
// void main()
// {
//     struct Book b;
//     b.no = 18;
//     strcpy(b.name, "My name is susan.");
//     puts(b.name);
//     printf("My age is :%d\n", b.no);
// }
struct book
{
    char name[20];
} n;
void fun(struct book n);
void main()
{
    struct book n;
    strcpy(n.name, "susan");
    fun(n);
}
void fun(struct book n)
{
    printf("HI %s", n.name);
}
