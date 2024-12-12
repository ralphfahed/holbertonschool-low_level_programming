#include <stdio.h>
#include "main.h"
#include <unistd.h>

#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
    char i;
    char j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 14; j++) {
            if (j > 9) {
                _putchar('0' + (j / 10));
            }
            _putchar('0' + (j % 10));
        }
        _putchar('\n');
    }
}

