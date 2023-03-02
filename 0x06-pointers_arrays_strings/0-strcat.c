#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string to append to
 * @src: source string to append
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
