//. WAP TO CREATE A STRUCTURE BOOK, READ AND DISPLAY INFORMATION OF A BOOK.
#include<stdio.h>
struct book{
    char name[20];
    int page;
  float price;
};
void main(){
struct book b;

printf("Enter the Book detalis:\n");

printf("Enter book name: ");
gets(b.name);

printf("Enter Book page and book price:\n");
scanf("%d%f",&b.page,&b.price);


printf("\n\nThe book %s price is :%f\nAnd slected  page is :%d\n\n",b.name,b.price,b.page);
}
