//Wap to calculate length of a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    printf("Enter  string:\n");
    gets(ch);
    int i,count=0;
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("THE lenth of the string is :%d\n",count);
    return 0;
}
/*
n=strlen(s1);
*/