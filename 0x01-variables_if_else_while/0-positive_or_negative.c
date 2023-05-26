#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main: entry point
*
* Return: Always 0 (Success)
*
*The srand and rand are functions from the stdlib.h library
*srand() -  to deed  the random number generator before using 'rand()'
*rand()-  generates a random integer between 0 and 'RAND_MAX'
*RAND_MAX/2 - This gives us half of the maximum value that can be generated
*/

int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
/*subtracting half the maximum value from the random number generat*/
/*the random number will span both +ve & -ve values centred around 0*/
printf("The number %d is ", n);

if (n > 0)
{
printf("positive\n");
}

else if (n == 0)
{
printf("zero\n");
}

else
{
printf("negative\n");
}

return (0);
}
