
#include <stdio.h>
#include <string.h>
int main()
{

  char ch[20];
  printf("Enter a string:");
  gets(ch);

  int len = strlen(ch);

  for (int i = len - 1; i >= 0; i--)
  {
    printf("%c", ch[i]);
  }

  //strrev(ch);
  //puts(ch);
  return 0;
}

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//   char ch[20];
//   printf("Enter String: ");
//   gets(ch);

//   int len=strlen(ch);
//   for(int i=len-1;i>=0;i--)
//   {
// printf("%c",ch[i]);
//   }
// }
// /*
// strrev(s1);
// */
