// gcc memoryallocation.c;size .\a.exe
//
// synatax:
// ptr=(ptr-type*)malloc(size_in_bytes);
#include <stdio.h>
#include <stdlib.h>
int main()
{
   // int *ptr,n;
   // printf("Enter the Size of Array:");
   // scanf("%d",&n);
   // ptr=(int*)malloc(n*sizeof(int));
   // int i;
   // for(i=0; i<n;i++)
   // {
   //     printf("\nEnter valu at %d: ",i+1);
   //     scanf("%d",&ptr[i]);
   //    }
   // for(i=0;i<n;i++)
   // {
   //     printf("\nvalu at %d is %d: ",i+1,ptr[i]);
   //  }
   //uses of calloc
   int *ptr, n;
   printf("Enter the Size of Array:");
   scanf("%d", &n);
   ptr = (int *)calloc(n, sizeof(int));
   int i;
   for (i = 0; i < n; i++)
   {
      printf("\nEnter valu at %d: ", i + 1);
      scanf("%d", &ptr[i]);
   }
   for (i = 0; i < n; i++)
   {
      printf("\nvalu at %d is %d: ", i + 1, ptr[i]);
   }

   return 0;
}
