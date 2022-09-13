#include <unistd.h>

/**
 * main - print a text
 *
 * Description: Task 8 file
 * return: always 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar 2015-10-19\n", 59);
	return (1);
}
