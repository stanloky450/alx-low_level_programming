#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1 if there's no natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;  
    }
    else if (n == 0 || n == 1)
    {
        return n;   
    }
    else
    {
        return find_sqrt(n, 1);  
    }
}

/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current variable for the square root.
 *
 * Return: The square root of n.
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess;  
    }
    else if (guess * guess > n)
    {
        return -1;  
    }
    else
    {
        return find_sqrt(n, guess + 1);  
    }
}
