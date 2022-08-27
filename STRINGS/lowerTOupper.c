//. program to convert lower case to upper case.
#include<stdio.h>
#include<string.h>
int main()
{
    
char ch[20];

printf("Enter a string:");
gets(ch);
int len = strlen(ch);
int i;

for(i=0;i<=len-1;i++)
{
    if(ch[i]>=97&&ch[i]<=123)
    {
continue;
    }else
    {
ch[i]=ch[i]+32;
    }

}
puts(ch);

return 0;
}

/*
upper-case9(65-90)
lower-case(97-123)
digits(48-57)
others symbols:
*/