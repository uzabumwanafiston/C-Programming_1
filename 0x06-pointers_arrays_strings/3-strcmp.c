#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: the difference between the first non-matching characters
 *         in s1 and s2, or 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] == '\0')
		return (-s2[i]);
	else
		return (s1[i]);
}
