#include<stdio.h>
void main()
    {
        float a,b,c,s,area;

        printf("Enter valu for A: \n");
        scanf("%f",&a);
        printf("Enter valu for B: \n");
        scanf("%f",&b);
        printf("Enter valu for C: \n");
        scanf("%f",&c);
        
        s=a+b+c;
         area=s*(s-a)*(s-b)*(s-c);
         printf("THE AREA OF TRNGLE IS:%d",area);

    }
