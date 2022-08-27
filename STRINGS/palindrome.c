//C  program to chake given string is palindrome or not..!
//heder file
/*
#include <stdio.h>
#include <string.h>
int main()
{
    //typedef char by str
    typedef char str;
    //declearing variable
    str string[1000];
    int i, n, c = 0;
    //taking  string from user
    printf("Enter  the string : ");
    gets(string);
    //storing lenth of string in variable n
    n = strlen(string);
    //loop for reverding and compering string
    for (i = 0; i < n / 2; i++)
    {
        if (string[i] == string[n - i - 1])
            c++;
    }
    //condetion to chake the valu of c and i are equal or not
    //printf output
    if (c == i)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    //end of condition
    return 0;
}
//end of program:
*/
//using string laibery
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];

    printf("Enter a string:");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    if (!strcmp(s1, s2))
        printf("\nString is palindrome:");
    else
        printf("\nString  is  not palindrome");
    return 0;
}*/