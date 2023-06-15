#include<stdio.h>
/**
 * main - an entry point for the program
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char:%lu byte(s)", sizeof(char));
	printf("Size of an int:%lu byte(s)", sizeof(int));
	printf("Size of a long int:%lu byte(s)", sizeof(long int));
	printf("Size of a long long int:%lu byte(s)", sizeof(long long int));
	printf("Size of a float:%lu byte(s)", sizeof(float));
	return (0);
}
