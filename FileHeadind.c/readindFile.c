//reading a file
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *file;
    char c;
    file = fopen("./FILE.txt", "r");
    while (1)
    {
        if (file == NULL)
        {
            printf("Error");
            exit(0);
        }
        else
        {
            c = fgetc(file);
            if (c == EOF)
            {
                break;
            }
            printf("%c", c);
        }
    }
    fclose(file);
}
