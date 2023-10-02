#include <stdio.h>
/**
 * main - prints the name of the program even if it changes
 * @argc: number of arguments
 * @argv: array of strings/arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
