#include <stdio.h>

/**
* main- entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)

{
if (ch != 'q' && ch != 'e')
/*prints a-z excluding q and e*/
putchar(ch);
}

putchar('\n');/*prints newline*/

return (0);
}
