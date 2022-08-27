//travek agency manager
#include <stdio.h>
#include <string.h>
typedef struct emp
{
    char name[100];
    int lNum;
    char rute[100];
    int klw;
} Employe;
int main()
{
    int i;
    Employe e[3];

    for (i = 0; i < 1; i++)
    {
        printf("Enter detalis of %d employee;\n\n", i + 1);

        printf("Enter name of %d employee:", i + 1);
        scanf("%s", &e[i].name);

        printf("\nEnter driving licence number:");
        scanf("%d", &e[i].lNum);

        printf("\nEnter rute:");
        scanf("%s", &e[i].rute);

        printf("\nEnter Total kilomitor: ");
        scanf("%d", &e[i].klw);

        printf("\n");
    }
    for (i = 0; i < 1; i++)
    {
        printf("\n\n*****Detalis of %d employ*******:", i + 1);

        printf("\nName:%s", e[i].name);

        printf("\nlicence number:%d", e[i].lNum);

        printf("\nRute:%s", e[i].rute);

        printf("\nTotal klw:%d\n", e[i].klw);
    }
    return 0;
}
//end of program