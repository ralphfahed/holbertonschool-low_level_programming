#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
    int i;

    if (n < 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != n)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (i < 0)
            {
                _putchar('-');
                if (i < -9)
                {
                    _putchar((-(i / 10)) + '0');
                }
                _putchar((-(i % 10)) + '0');
            }
            else if (i < 10)
            {
                _putchar(i + '0');
            }
            else
            {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
            }
        }
    }
    else if (n == 98)
    {
        _putchar('9');
        _putchar('8');
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != n)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (i < 0)
            {
                _putchar('-');
                if (i < -9)
                {
                    _putchar((-(i / 10)) + '0');
                }
                _putchar((-(i % 10)) + '0');
            }
            else if (i < 10)
            {
                _putchar(i + '0');
            }
            else
            {
                if (i >= 100)
                {
                    _putchar(i / 100 + '0');
                    _putchar((i / 10) % 10 + '0');
                }
                _putchar(i % 10 + '0');
            }
        }
    }
    _putchar('\n');
}

