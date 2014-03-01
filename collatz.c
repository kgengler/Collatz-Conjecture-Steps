#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
	if ( argc != 2 )
	{
		printf( "usage: %s <integer>", argv[0] );
	}
	else
	{
		int cc = strtol(argv[1], NULL, 10);
		int n = 1;
		printf("%i: ", cc);
		while ( cc != 1 )
		{
			if ( 0 == cc % 2 )
			{
				cc = cc / 2;
			}
			else
			{
				cc = 3 * cc + 1;
			}
			/* printf("%i\n", cc); */
			n = n + 1;
		}
		printf("Found 1 in %i steps\n", n);
	}

	// END
	return 0;
}
