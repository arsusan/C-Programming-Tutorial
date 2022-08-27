// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("The valu of argc is :%d\n", argc);
//     for (int i = 0; i < argc; i++)
//     {
//         printf("Thish argc number :%d has value of %s\n", i, argv[i]);
//     }

//     return 0;
// }
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void CheckArgumentCount(int argc);
int CheckOperands(char *argv[]);
long Calculate(long nr1, long nr2, char operation);

int main(int argc, char *argv[])
{
    long nr1 = CheckOperands(&argv[1]);
    long nr2 = CheckOperands(&argv[3]);
    int result;

    CheckArgumentCount(argc);
    result = Calculate(nr1, nr2, *argv[2]);
    printf("Result: %d", result);

    return 0;
}

void CheckArgumentCount(int argc)
{
    if (argc > 3 || argc < 3)
    {
        puts("Wrong number of arguments to perform the calculation.\n");
    }
}

int CheckOperands(char *argv[])
{
    int i = 1;

    while (*argv[i] != '\0')
    {
        if (*argv[i] < '0' || *argv[i] > '9')
        {
            return *argv[i];
        }
        argv++;
    }
    return atoi(argv[i]);
}

long Calculate(long nr1, long nr2, char operation)
{
    long result = 0;

    switch (operation)
    {
    case '+':
        result = nr1 + nr2;
        break;
    case '-':
        result = nr1 - nr2;
        break;
    case '*':
        result = nr1 * nr2;
        break;
    case '/':
        if (nr2 == 0)
        {
            puts("Error! Divion by zero.");
        }
        else
        {
            result = nr1 / nr2;
        }
        break;
    default:
        puts("Operator invalid.");
        break;
    }
    return result;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the operation.
    // The next arguments being the two numbers. For example:
    // >>Command.c add 45 4
    // >>49
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // printf("Operation is %s\n", operation);
    // printf("Num1 is %d\n", num1);
    // printf("Num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}
