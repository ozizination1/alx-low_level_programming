#include<stdio.h>
/**
 * main - an entry point for the program
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
		ch++;
	}
			putchar('\n');
	return (0);
}

