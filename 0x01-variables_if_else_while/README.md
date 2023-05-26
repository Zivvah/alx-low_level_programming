C 0x01
Variables, conditional statements and loops

Some of the functions and syntax used:

*he srand and rand are functions from the stdlib.h library
*srand() -  to deed  the random number generator before using 'rand()'
*rand()-  generates a random integer between 0 and 'RAND_MAX'
*RAND_MAX/2 - This gives us half of the maximum value that can be generated
n = rand() - RAND_MAX / 2; This is subtracting half the maximum value from the random number generated from the rand() function. This will allow the random number will span both +ve & -v\
e values centred around 0


* In task 1,The last digit,to get the last digit, we used the modulus operator '%".
syntax:  int lastDigit = number % 10
         int lastDigit = n % 10; where 'n' represents the variable storing the number we want to extract the last digit from. The'%' calculates the remainder when 'n' is divided by 10. S\
ince the remainder will always be the last digit,it then assigns the value to the variable 'lastDigit'