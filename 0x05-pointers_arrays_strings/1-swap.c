ulien@ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

	       /**
		* main - check the code for Holberton School students.
		*
		* Return: Always 0.
		*/

void swap_int (int *a, int *b)
{

  int temp;
  temp = *a;
  *a = *b;
  *b = temp;

}
