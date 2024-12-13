#include <stdio.h>
#include "main.h"
#include <unistd.h> /* Include the correct header for write */

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer whose absolute value is to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
