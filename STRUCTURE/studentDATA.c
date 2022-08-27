/*Wap to create a structure of student, read info. of ten student
 and print name of those students whose marks is grater then 90*/
 #include<stdio.h>
 struct student{
  char name[10];
  int marks;
 };
 void main(){
 struct student s[5];
 int i;
 printf("FILL UP STRUDENT IN-FORMETION:\n");
 for(i=0;i<3;i++){
     printf("Enter student name: ");
    scanf("%s",&s[i].name);
     printf("Enter marks: ");
     scanf("%d",&s[i].marks);
 }
printf("\n\nName of student above 90 marks:\n");
for(i=0;i<3;i++){
    if(s[i].marks>90){
      puts(s[i].name);
        }
      }
    }
