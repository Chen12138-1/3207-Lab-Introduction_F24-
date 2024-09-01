#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< Updated upstream
=======
#include "random.h"
>>>>>>> Stashed changes


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
<<<<<<< Updated upstream
}
=======
}
>>>>>>> Stashed changes
