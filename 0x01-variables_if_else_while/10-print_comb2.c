include <stdio.h>
/**
 * main - Print the numbers to 99 with commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;
for (b = 0; b <= 9; b++)
{
for (a = 0; a <= 9; a++)
{
putchar(b + 48);
putchar(a + 48);
if (b != 9 || a != 9)
putchar(44);
if (b != 9 || a != 9)
putchar(32);
}
}
putchar(10);
return (0);
}
#include <stdio.h>

int main()
{
for(int i = 0; i < 100 ; i++){

putchar((i/10)+'0');
putchar((i%10)+'0');
printf(", ");
}
}
