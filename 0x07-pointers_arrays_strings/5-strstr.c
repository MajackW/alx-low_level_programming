#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to main string
 * @needle: pointer to string to be found
 * return: pointer to beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}
		if (*need == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
