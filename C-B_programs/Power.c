/*//. Wap to calculate power of no.
#include<stdio.h>
#include<math.h>
void main(){
    int n,p;
    printf("Enter  a number :");
    scanf("%d",&n);

    printf("Enter POWER:");
    scanf("%d",&p);
    int z=pow(n,p);
printf("The %d power of %d is:%d",p,n,z);
    
}

#include<stdio.h>
void main(){
    int Num,Pow,i,sum=1;
    printf("Enter NUmber and its power::\t");
    scanf("%d %d",&Num,&Pow);
    for(i=2;i<=Num;i++)
     sum=Num*Num;
 
     printf("Answer is:%d",sum);

}*/