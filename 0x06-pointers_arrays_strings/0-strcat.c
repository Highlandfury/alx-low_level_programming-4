#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
	int index, len = 0;

	while (dest[index++])
	{
		len++;
	}
	dest_len = len;

	for(index = 0; src[index] != '\0';index++)
	{
		dest[dest_len + index] = src[index];
	}
	dest[dest_len + index] = '\0';

	return(dest);
}
