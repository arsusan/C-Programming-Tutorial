
//Wap to copy a string into another string
#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[20];
    char ch2[20];

    printf("Enter String:\n");
    gets(ch1);

    for(int i=0;ch1[i]!='\0';i++)
    {
        ch2[i]=ch1[i];
        ch2[i]='\0';
    }

puts(ch2);
    return 0;
}

/*
strcpy(s2,s1);
*/
