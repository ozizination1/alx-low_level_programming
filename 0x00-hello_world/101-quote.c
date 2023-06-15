#include<stdio.h>
#include <unistd.h>
/**
 * main - an entry for the prog that prints line to standard error
 * Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
