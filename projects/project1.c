//
#include <string.h>
#include <conio.h>
#include <stdio.h>
int main()
{
    char n;
    int i = 0;

    printf("Enter String :\n");

    FILE *fpt;
    fpt = fopen("char.dat", "w");
    while ((n = getchar()) != '\n')
    {
        putc(n, fpt);
    }
    fclose(fpt);
    fpt = fopen("char.dat", "r");
    char ch1;
    printf("String of data file\n");
    while ((ch1 = getc(fpt)) != EOF)

    {
        printf("%c", ch1);
    }
    fclose(fpt);

    return 0;
}