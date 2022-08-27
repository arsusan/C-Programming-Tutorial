#include <stdio.h>
#include <string.h>
int pliNdrome(int n)
{
    int a, rev = 0, old;
    old = n;
    do
    {
        a = n % 10;
        n = n / 10;
        rev = rev * 10 + a;
    } while (n != 0);
    if (old == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf(" \nEnter  NUMbers:");
    scanf("%d", &num);
    int number = pliNdrome(num);
    if (number == 1)
    {
        printf(" \n The NUmber is plindrome:");
    }
    else
    {
        printf(" \nThe number is not palindrome:");
    }
    return 0;
}

