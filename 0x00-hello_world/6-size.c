#include <stdio.h>
/**
 * main - this program prints all the data types compiled on my computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of long long: %ld byte(s)\n", sizeof(long long));
	printf("Size of float: %ld byte(s)\n", sizeof(float));

	return (0);
}
