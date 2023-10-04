#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *p, *q;

    s = str_concat("Hello", NULL);
    p = str_concat(NULL, "Hello");
    q = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    printf("%s\n", p);
    printf("%s\n", q);
    free(s);
    free(p);
    free(q);
    return (0);
}
