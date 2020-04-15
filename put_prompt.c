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
