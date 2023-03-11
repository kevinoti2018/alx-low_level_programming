#include <stdio.h>
#include "main.h"

/**
 * _pucharc writes the chracter c to stdout
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1);
}
