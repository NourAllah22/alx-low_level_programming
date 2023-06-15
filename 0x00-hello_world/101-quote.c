#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = sizeof(str1) - 1;

	write(2, str1, len);
	return (1);

}
