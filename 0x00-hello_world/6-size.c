#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float e;

        fprintf(stderr, "Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
        fprintf(stderr, "Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
        fprintf(stderr, "Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
        fprintf(stderr, "Size of a long long int: %lu byte(s) \n",
(unsigned long)sizeof(d));
        fprintf(stderr, "Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
        return (0);
}
