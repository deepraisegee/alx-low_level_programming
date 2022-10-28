/**
  * _strlen - get the length of a stringg
  * @str: char pointer
  *
  * Return: the length of a string
  */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
