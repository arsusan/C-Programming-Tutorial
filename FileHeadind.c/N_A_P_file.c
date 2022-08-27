//
#include <stdio.h>
#include <conio.h>
int main()
{
    char name[50];
    char address[50];
    char telno[50];
    FILE *fp;
    int i, n;
    fp = fopen("a.dat", "a");
    printf("How maney records:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter The Name: ");
        scanf("%s", name);
        printf("\nEnter The address: ");
        scanf("%s", address);
        printf("\nEnter The Thelephone: ");
        scanf("%s", telno);
        fprintf(fp, "\n%s\t%s\t%s", name, address, telno);
    }
    fclose(fp);
    fp = fopen("a.dat", "r");
    printf("Name \t Address \t Teliphone\n");
    while (fscanf(fp, "%s%s%s", name, address, telno) != EOF)
        ;
    {
        printf("\n%s\t%s\t%s", name, address, telno);
    }
    fclose(fp);
    return 0;
}
