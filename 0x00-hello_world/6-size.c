#include <stdio.h>

/**
 * main - Prints the size of various sizes of computers
 *
 * Return: this alwsy has to be 0 for now
 */

int main(main)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(S)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
