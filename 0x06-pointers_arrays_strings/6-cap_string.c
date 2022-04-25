#include "main.h"
/**
 * cap_string - capitalizes the first letters of all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j = 0;

	char separators[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;

	if ((s[i] >= 'a') && (s[i] <= 'z'))
	{
		s[i] = s[i] - 32;
	}

	while (s[i] != '\0')
	{
		for (i = 0; i < j; i++)
		{
			if (s[i] == separators[j])
			{
				if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
			}
		}
	}
	return (s);
}
