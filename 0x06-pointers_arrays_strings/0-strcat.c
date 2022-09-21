#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the first string
 * @dest: the second string
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
			dest[len + i] = '\0';

	return (dest);
}
