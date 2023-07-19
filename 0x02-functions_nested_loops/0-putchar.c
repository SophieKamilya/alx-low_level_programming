#include "main.h"

/**
 * main - prints "_putchar"
 * Return: 0
 */

int main(void)
{
        int i = 0;
        char w[11] = "_putchar\n";

        while (w[i] != '\0')
        {
                _putchar(w[i]);
                i++;
        }
        return (0);
}
