//pr2 Q1 write a program to check wether a number is even or odd using the ternary operator.
#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("- - - - - - -  - - \n");
printf("enter any number:");
scanf("%d",&a);
(a % 2 == 0)?
	 printf("(( the number is even ))")
	 :printf("(( the number is odd ))");
getch();
}