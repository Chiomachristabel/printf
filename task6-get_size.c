#include "main.h"
/**
 *get_size - calculates size to cast argument
 *@format: formatted string in which to print the arguments
 *@i: list of arguments to print
 *
 *Retur precision
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == '|')
		size = s_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		* = curr_i;
	return (size);
}