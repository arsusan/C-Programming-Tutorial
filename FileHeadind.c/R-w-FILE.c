#include <stdio.h>
int main()
{
    //****file reading and writing ****
    /* FILE *ptr;
    char string[100];
    ptr = fopen("FILE.txt", "r");
    fscanf(ptr, "%s", string);
    printf("%s", string);
    // fprintf(ptr, "%s", string);*/
    FILE *ptr;
    char str[100];
    ptr = fopen("FILE.txt", "w");
    // fgets(str, 100, ptr);
    // printf("%s", str);
    fputs("Hello i am learning c .", ptr);
    return 0;
}
