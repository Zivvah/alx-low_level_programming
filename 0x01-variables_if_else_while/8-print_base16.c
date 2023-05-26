#include <stdio.h>

/**
* main- entry point
*
* Return: Always 0 (Success)
* This code prints hexadecimals using putchar
*/

int main(void)
{
char hexa;

for (hexa = '0'; hexa <= '9'; hexa++)

/*prints 0-9*/
{
putchar(hexa);
}

for (hexa = 'a'; hexa <= 'f'; hexa++)
/*prints a-f*/
{
putchar(hexa);
}

putchar('\n');/*prints newline*/

return (0);
}
