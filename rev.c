#include "main.h"

int rev(char buffer [], va_list args)
{
	char *str;
	int len;

	str = va_arg(args, char *);
	len = _strlen(str);
	len--;
	while (len >= 0)
	{
		*buffer.box = str[len];
		buffer.box++;
		buffer.size++;
		len--;
	}

	buffer.box--;
	return (buffer);
}