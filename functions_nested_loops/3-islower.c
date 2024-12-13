#include <stdio.h>
#include "main.h"
#include <unistd.h> /* Include the correct header for write */

/**
 *  _islower - check for lower case
 *  @c: The character to check.
 * Return: 0 on success, indicating the program executed successfully
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
