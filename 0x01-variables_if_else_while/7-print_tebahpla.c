#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lowercase alphabet backwards
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
