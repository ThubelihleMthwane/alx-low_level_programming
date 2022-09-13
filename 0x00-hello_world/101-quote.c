#include <unistd.h>

/**
 * main - print a text
 *
 * return: always 1 (success)
 */
int main(void)
{
	write(2,"and thst piece of art is useful\" - Dora Korpar 2015-10-19\n", 59);
	return (1);
}
