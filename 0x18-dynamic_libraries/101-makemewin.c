#include <stdlib.h>
#include <unistd.h>

/**
 * srand - overwriting the standard srand.
 * @seed: The seed to use number generator [Ignored].
 *
 * Description:
 * This function overwrites the standard srand function and give
 * to the standard output indicating that the user has won.
 */

void srand(unsigned int seed)
{
	const char *nums_txt = "9 8 10 24 75 - 9\n";
	const char *txt = "Congratulations, you win the Jackpot!\n";

	(void)seed;
	write(STDOUT_FILENO, (void *)nums_txt, 17);
	write(STDOUT_FILENO, (void *)txt, 38);
	exit(EXIT_SUCCESS);
}
