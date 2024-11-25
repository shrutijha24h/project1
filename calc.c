#include"stdio.h"         //include stdio.h header file in this program
#include"conio.h"         //include conio.h header file in this program
void main()                //call main function that will call all other function.

{
int a,b,c;                      //declare 3 variable a,b and c of int type to hold int data inside it.
printf("Enter First Number: ");  //call printf function to print message on the screen.
scanf("%d",&a);                 //store value inside the address of a variable.
printf("Enter Second Number : ");  //call printf function to print message on the screen.
scanf("%d",&b);                  //store value inside the address of variable.
c=a+b;                          //add two numbers a and b and store inside c variable.
printf("Addition of %d and %d is %d",a,b,c); //print addition of a and b using c variable
getch();                              //to take a single character input
}