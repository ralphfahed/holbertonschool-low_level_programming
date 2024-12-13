#include <unistd.h> /* Include the correct header for write */
#include <stdio.h>

/**
 * _isalpha - check for lower case or upper case
 * @c: The character to check.main - prints "_putchar" followed by a new line
 * Return: 0 on success, indicating the program executed successfully
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
