#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: Get a random number and print the number
* and Determines if a number is positive, negative or zero.
* Return : Always 0 (Sucess)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

    
        if (n > 0)
		printf("%d is positive\n", n);

        else if (n < 0) 
		printf("%d is negative\n", n);
  
        else
                printf("%d is zero\n", n);
 
    return (0);    
}

