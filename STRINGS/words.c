//Wap to count total char and words in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("Ennter  a string:");
    gets(ch);

int w=1,c=0,i,len=strlen(ch);
for(i=0;i<=len-1;i++)
{
    c++;
if(ch[i]==' ')
w++;
}
printf("The number of character is: %d \n",c);
printf("The TOtal Words is: %d\n",w);
    return 0;
}
