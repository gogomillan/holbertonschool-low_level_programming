/**
 * _islower - This function checks for a lower-case character
 * @c: The character to evaluate
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
