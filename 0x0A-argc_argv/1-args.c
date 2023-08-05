#include<stdio.h>

int main(int argc, char **argv)
{
	int count = 0;
	char **arg;

	for (arg = argv; *arg != NULL; arg++) {
		count++;
	}

	printf("%d\n", count);

	return 0;
}
