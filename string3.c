#include "shell.h"

/**
 * _strcmp - funct that differs two strings
 * @l1: string 1
 * @l2: string 2
 * Return: 0 if same otherwise how much diffrence
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, i, len1, len2;

	len1 = _strlen(l1);
	len2 = _strlen(l2);

	if (l1 == NULL || l2 == NULL)
		return (1);

	if (len1 != len2)
		return (1);

	for (i = 0; l1[i]; i++)
	{
		if (l1[i] != l2[i])
		{
			cmp = l1[i] - l2[i];
			break;
		}
		else
			continue;

	}
	return (cmp);
}

/**
 * _isalpha - function to check if c is alphabet
 * @a: character to check
 * Return: 1 if pass 0 if fail
 */
int _isalpha(int a)
{
	if (((a >= 97) && (a <= 122)) || ((a >= 65) && (a <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _itoa - funciton that change integer to character
 * @t: integer to change
 * Return: character pointer
 */
char *_itoa(unsigned int t)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(t);
	s = malloc(len + 2);

	if (!s)
	{
		free(s);
		return (NULL);
	}
	*s = '\0';

	while (t / 10)
	{
		s[i] = (t % 10) + '0';
		t /= 10;
		i++;
	}

	s[i] = (t % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';

	return (s);
}

/**
 * array_rev - function array reverse
 * @arr: array to reverse
 * @len: array length
 */
void array_rev(char *arr, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = tmp;
	}
}

/**
 * intlen - function that determines integer legth
 * @num: integer provided
 * Return: integer legth
 */
int intlen(int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

