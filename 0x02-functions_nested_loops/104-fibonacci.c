#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(unsigned long n)
{
    unsigned long i = 1;

    while (i <= n / 10)
        i *= 10;

    while (i > 0)
    {
        _putchar((n / i) % 10 + '0');
        i /= 10;
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long a = 1, b = 2, c, i;

    print_number(a);
    _putchar(',');
    _putchar(' ');
    print_number(b);

    for (i = 2; i < 98; i++)
    {
        c = a + b;
        a = b;
        b = c;

        _putchar(',');
        _putchar(' ');
        print_number(c);
    }

    _putchar('\n');
    return (0);
}
