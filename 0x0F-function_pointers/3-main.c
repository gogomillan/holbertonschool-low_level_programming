#include "3-calc.h"

/**
 * main - operate two numbers
 *
 * @argc: The qty of parameters
 * @argv: The parameters array
 *
 * Return: The add
 *
 */
int main(int argc, char **argv)
{
char o = argv[2][0];
char o2 = argv[2][1];

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((o != '+' && o != '-' && o != '*' && o != '/' && o != '%') || o2 != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((o == '/' || o == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("[%d]\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
