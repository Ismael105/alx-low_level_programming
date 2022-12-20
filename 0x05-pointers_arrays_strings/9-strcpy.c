#include "main.h"
/**
 * *_strcpy - copies the string
 * @src: source
 * @dest: destination
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
while (*(src + l) != '\0')
{
*(dest + l) = *(src + l);
l++;
}
*(dest + l) = '\0';
return (dest);
}
