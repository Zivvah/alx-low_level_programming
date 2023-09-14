#include "main.h"
#include <stdio.h>
/**
 * main -  prints its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void)argc;
	/*argc is unused*/
	printf("%s\n", argv[0]);
	return (0);
}
