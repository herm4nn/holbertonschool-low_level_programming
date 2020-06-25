ulien@ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

	       /**
		* main - check the code for Holberton School students.
		*
		* Return: Always 0.
		*/

int main()
{
  int a, b;

  printf("Input two integers (a & b) to swap\n");
  scanf("%d%d", &a, &b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("a = %d\nb = %d\n",a,b);
  return 0;
}
