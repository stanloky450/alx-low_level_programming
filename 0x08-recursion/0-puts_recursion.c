#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        /* When we reach the end of the string, print a new line. */
        putchar('\n');
    }
    else
    {
        /* Print the current character and recursively call _puts_recursion on the rest of the string. */
        putchar(*s);
        _puts_recursion(s + 1);
    }
}
