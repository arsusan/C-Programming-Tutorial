//Wap to check whether a character is present in string or not
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20],c;
    int i,count=0;
    
    printf("Enter a string:\n");
    gets(ch);

printf("Enter a letter:\n");
scanf("%c",&c);
int len=strlen(ch);
for(i=len-1;i>=0;i--)
{
    if(ch[i]==c)
    {
        count++;
     
   
    }
    
}
if(count==0)
{
printf("The character is not avaiable:\n");
}
else{
    printf("The character is avaiable:And the number of character %c are %d in the character:\n",c,count);
}
 return 0;
}

