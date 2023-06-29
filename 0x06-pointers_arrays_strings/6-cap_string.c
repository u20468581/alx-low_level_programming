#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int number = 0;

	while (str[number])
	{
		while (!(str[number] >= 'a' && str[number] <= 'z'))
			number++;

		if (str[number - 1] == ' ' ||
		    str[number - 1] == '\t' ||
		    str[number - 1] == '\n' ||
		    str[number - 1] == ',' ||
		    str[number - 1] == ';' ||
		    str[number - 1] == '.' ||
		    str[number - 1] == '!' ||
		    str[number - 1] == '?' ||
		    str[number - 1] == '"' ||
		    str[number - 1] == '(' ||
		    str[number - 1] == ')' ||
		    str[number - 1] == '{' ||
		    str[number - 1] == '}' ||
		    number == 0)
			str[number] -= 32;

		number++;
	}

	return (str);
}
