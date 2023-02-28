#includde "main.h"
/**
  *__puts - prints a string,followed by a new line,to stdout)
 *@str: string to print
 */
'void '_puts'(char * 'str')'i
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	       putchar('\n');
}
