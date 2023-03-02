#include "main.h"
#include <unistd.h>
/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
char *rot13(char *s)
{
	char *p = s;
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				break;
			}
			else if (s[i] == rot13[j])
			{
				_putchar(alphabet[j]);
				break;
			}
		}
		if (alphabet[j] == '\0' && rot13[j] == '\0')
		{
			_putchar(s[i]);
		}
	}
	return (p);
}
