#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')/*Traverse the string until the null terminator*/
{
length++;
s++;/*Move to the next character*/
}
return (length);/*Return the length of the string*/
}

