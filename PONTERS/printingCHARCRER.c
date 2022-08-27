//printing charaacrer using pointer
#include<stdio.h>
#include<string.h>
int main()
{
char ch[20];

printf("Enter string:");
gets(ch);

int *p;
p=&ch;
while(*p!='NULL')
{
printf("%c",*p);
p++;
}
 return 0;
}
