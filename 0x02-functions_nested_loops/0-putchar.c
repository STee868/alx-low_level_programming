int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
/**
 * _putchar - Writes a character to stdout
 *
 * @c: The character to print
 *
 * Return: On success, returns the character written. On error, returns -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
