#include <unistd.h>

/**
 *main - Entry point of the code
 *void - main function take no arguments
 *Return:1-(Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, msg, sizeof(msg) - 1);
	
	return (1);
}
