//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, i = 0;
    char *ptr;
    printf("\nEnter number of your character: ");
    scanf("%d", &c);
    ptr = (char *)malloc((c + 1) * sizeof(char));
    printf("\nEnter your id: ");
    scanf("%s", ptr);
    printf("\nYour id is: %s", ptr);
    free(ptr);
    return 0;
}
