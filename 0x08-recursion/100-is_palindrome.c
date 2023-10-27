#include "main.h"

/**
  * _strlen_recursion - get the length of a string.
  * @s: string
  *
  * Return: lenght
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
  * check_palindrone - check if a string is a palindrome.
  * @s: string
  * @l: left index
  * @r: right index
  *
  * Return: 0 or 1;
  */
int check_palindrone(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	else if (s[l] == s[r])
		return (check_palindrone(s, l + 1, r - 1));
	return (0);
}

/**
  * is_palindrome - 1 if a string is a palindrome and 0 if not.
  * @s: string
  *
  * Return: 1 or 0.
  */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l == 0 || l == 1)
		return (1);

	return (check_palindrone(s, 0, l - 1));
}
