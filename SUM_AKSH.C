#include<stdio.h>
#include<conio.h>

void main()
{
  int a, b, c;
  clrscr();

  printf("Enter any value for a and b:");
  scanf("%d %d", &a, &b);    //Read user input

  c = a + b;

  printf("Addition is:%d", c);

  //getch();
}