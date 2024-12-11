#include <unistd.h> /* Include the correct header for write */
#include <stdio.h>

/**
 * main - prints "_putchar" followed by a new line
 * Return: 0 on success, indicating the program executed successfully
 */
int main(void)
{
write(1, "_putchar\n", 9); /*  Use write to print "_putchar" followed by a newline */
return (0);
}
