//
// #include <stdio.h>
// void main()
// {
//     int x = 10;
//     char ch = 's';
//     void *ptr = &x;
//     printf("The valu of x is: %d\n", *((int *)ptr));
//     ptr = &ch;
//     printf("The valu of ch is: %c\n", *((char *)ptr));
// }
// what is stack overflow
// dandling pointer
//1.free() memeory
//returning local variable in function call
/*
#include <stdio.h>

int *myfunc()
{
    int a = 34;
    return a;
}
int main()
{
    int *ptr = myfunc();
    printf("%d\n", *ptr);
    return 0;
}*/
//variable going out of scope
/*
#include <stdio.h>
int main()
{
    int a = 10, *ptr;
    {
        ptr = &a;
    }
    printf("%d", *ptr);
    return 0;
}*/
