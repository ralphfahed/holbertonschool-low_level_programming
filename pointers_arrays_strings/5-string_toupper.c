#include "main.h"
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @s: The string to be modified.
 *
 * Return: The modified string with all uppercase letters.
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')  /* Check if character is lowercase */
s[i] = s[i] - 32;  /* Convert lowercase to uppercase */
i++;
}
return (s);  /* Return the modified string */
}
