// //
// #include<stdio.h>
// #include<string.h>
// int main()
// {

//     return 0;
// }
// /*
// n=strcmp(s1,s2);
// */
#include <stdio.h>
#include <string.h>
int chakepalinDrome(char *str);
int main()
{
    char str[100];

    printf("Enter a string:");
    gets(str);
    int result = chakepalinDrome(str);

    if (result == 1)
        printf("\nString is plindrome");
    else
        printf("\nString is not plindrome");
    return 0;
}
int chakepalinDrome(char *str)
{
    int i, n = strlen(str), count = 0;
    for (i = 0; i < n / 2; i++)
    {
        if (str[i] == str[n - i - 1])
            count++;
    }
    if (count == i)
        return 1;
    else
        return 0;
}
