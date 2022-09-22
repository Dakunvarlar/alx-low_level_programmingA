#include "main.h"
/**
 * cap_string - this function capitalizes
 *
 * @s: dest string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] == s[0] && s[i] >= 'a' && s[i] <= 'z')
	{
		if (s[i] == s[0] && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == ',' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == ';' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '.' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '!' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '?' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '\"' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '(' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == ')' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '{' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '}' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '\n' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '\t' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
			continue;
	}
	return (s);
}
