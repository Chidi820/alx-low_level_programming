#includde "main.h"
/**
  *__puts - prints a string,followed by a new line,to stdout)
 *@str: string to print
 */
void  _ puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	       _ putchar('\n');
}
