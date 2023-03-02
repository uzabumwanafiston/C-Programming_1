#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *str)
{
	char *s = str;
	int cap_next = 1;

	while (*s != '\0')
	{
		if (cap_next && (*s >= 'a' && *s <= 'z'))
		{
			*s -= 32;
			cap_next = 0;
		}
		if (*s == ' ' || *s == '\t' || *s == '\n' ||
				*s == ',' || *s == ';' || *s == '.' ||
				*s == '!' || *s == '?' || *s == '"' ||
				*s == '(' || *s == ')' || *s == '{' ||
				*s == '}')
			cap_next = 1;
		s++;
	}

	return (str);
}
