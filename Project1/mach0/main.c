/* Authors : You Robin , Houlier Nicolas 
 * Date 08.02.2017
 * 
 * main programm */

# include <stdio.h>
# include <stdlib.h>

# include <math.h>

# include "question1.h"

# include "utest.h"
# include "vtest.h"



int main(int argc, char **argv)
{
	printf("Question 1 : \n");
	question1();
	printf("\nQuestion 2 :\n");
	utest(3);
	printf("\nQuestion 3 :\n");
	
	vtest(24);
	
	
	return EXIT_SUCCESS;
}
