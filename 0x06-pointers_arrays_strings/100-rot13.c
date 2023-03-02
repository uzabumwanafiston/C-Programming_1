#include "main.h"
#include <stddef.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i;
	char *result = str;
	/* Loop through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* If the character is a letter */
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			result[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
		{
			result[i] = str[i] - 13;
		}
		else
		{
			/* Not a letter, do not modify */
			result[i] = str[i];
		}
	}
	return (result);
}
