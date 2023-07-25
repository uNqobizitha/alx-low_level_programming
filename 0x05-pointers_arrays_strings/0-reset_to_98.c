#include <stdio>

void reset_to_98(int *);

/**
 * /**
 * reset_to_98 - the function that takes a pointer to an int a s parameter
 * and updates the value it points to 98
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf(""%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
