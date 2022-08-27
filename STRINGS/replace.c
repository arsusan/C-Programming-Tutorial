//wap to replace char of string with another char.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch,chr;

    printf("Enter a set of string:");
    gets(str);

     printf("\nEnter the number by which you want to replacae:");
     scanf(" %c",&chr);
    printf("\nEnter the charcter you want to replace:");
    scanf(" %c",&ch);
int len = strlen(str);
    for(int i=0;i<=len-1;i++)
    {
        if(str[i]==chr)
        {
      str[i] = ch;
        }
  
    }
puts(str);
    return 0;
}
