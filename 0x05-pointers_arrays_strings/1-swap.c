#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void swap(int*, int*);
{
int x, y;
/**Swap function definition*/
 void swap(int *a, int *b)
 {
   int t;

   t  = *b;
   *b = *a;
   *a = t;
}
printf("Enter the value of x and y\n");
scanf("%d%d", &x, &y);
printf("Before Swapping\nx = %d\ny = %d\n", x, y);
swap(&x, &y);
printf("After Swapping\nx = %d\ny = %d\n", x, y);
return (0);
}
