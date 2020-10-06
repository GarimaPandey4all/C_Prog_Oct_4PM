#include<stdio.h>
#include<conio.h>

/*
	signed short int = 2 bytes = 65536 = -32768 to -1 and 0 to 35565
	unsigned short int = 2 bytes = 65536 = 0 to 65535
*/

void main()
{
  //signed short int x = -32772;
  unsigned short x = 65538;

  clrscr();

  printf("value of x is: %d\n", x);
  printf("value of x is: %u", x);

  getch();
}