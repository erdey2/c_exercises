#include "shell.h"

/**
 * _strcat - appends string at end
 * @s1: destination string
 * @s2: source string
 * 
 * return: the concatenated string
 */
char *_strcat(char *s1, const char *s2)
{
	char *temp = s1;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	while (*temp)
		temp++;
		while (*temp++ = *s2++)
			;
		return (s1);
}