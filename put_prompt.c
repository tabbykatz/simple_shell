#include "shell.h"
/**
 * puts_prompt -puts the prompt
 *
 *
 */
void puts_prompt(void)
{
	_puts(PROMPT);
}
/**
 * _puts - prints a string without a \n
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
#include <unistd.h>

/**
   * _putchar - writes the character c to stdout
   * @c: The character to print
   *
   * Return: On success 1.
   * On error, -1 is returned, and errno is set appropriately.
   */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

