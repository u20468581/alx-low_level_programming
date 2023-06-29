#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int b, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; n[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (n[b] == s1[c])
			{
				n[b] = s2[c];
			}
		}
	}
	return (n);
}
