#include "main.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/

void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
/* ascii value for a is 97 and for z is 122*/
}
_putchar('\n');
}











/**
*alternatively
*char ch;
*for (ch = 'a'; ch <= 'z'; ch++)
*{
*_putchar(ch);
*}
*_putchar('\n');
*/
