#include <stdarg.h>
#include <stdio.h>

/**
 * -printf: a funtion that prints formated outputs to console
 * the whole implementtation of printf funrion. 
 */

int printf(const char *format, ...){
	va_list args;
	int count = 0;
	int i = 0;
	va_start(args, fornat);
	while (format[i] != '\0') {
		if (format[i] == '%') 
{
	i++;
	if  (format [i] == 'c') 
	{
		putchar(va-arg(args, int));
		count++;
	}
       	else if (format[i] == 's') 
	{
		print_string(va_arg(args, char*));
		count += strlen(va_arg(args, char*));
	}
       	else if (format [i] == '%')
	{
		putchar('%');
		count++;
	}
	else
	{
		/*Handles invalid conversion specifier */
		
	}
	else
	{
		putchar (format[i]);
		count++;
	}
	va_end(args);
	return count;
}

void print_string(char* s)
{

	int i = 0;
	while (s[i] != '\0')
	{
		putchar (s[i]);
		i++;
	}
}
