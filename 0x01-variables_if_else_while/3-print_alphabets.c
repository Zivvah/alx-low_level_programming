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
/*prints lower case alphabets*/
putchar(ch);
}

for (ch = 'A'; ch <= 'Z'; ch++)
{
/*prints upper case alphabets*/
putchar(ch);
}

putchar('\n');/*prints newline*/

return (0);
}
