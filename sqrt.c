/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("DEBUG: Usage ./a.exe input\n\n");

	if ( input<0)
	{
		 printf("DEBUG: Sqrt of %d is %fi\n",input,sqrt(-1*input));                                                         printf("DEBUG: Exiting the program\n");                                                                        return(0);
	}

	printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	printf("DEBUG: Exiting the program\n");
	return(0);

} // end main
