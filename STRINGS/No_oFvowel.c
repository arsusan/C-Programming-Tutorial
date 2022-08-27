//Wap to count total no. of vowels in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];

printf("Enter a string:");
gets(ch);

int len=strlen(ch);
int count =0;
for(int i=0;i<=len-1;i++)
{
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
    count++;
}
printf("There are %d vowel character in string\n",count);
    return 0;
}
