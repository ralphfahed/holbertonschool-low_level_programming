#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string, or 0 if no numbers found.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
			return (sign == 1 ? INT_MAX : INT_MIN);

		result = result * 10 + (s[i] - '0');
	}
	return (result * sign);
}
