/**
 * _isalpha - This function checks for an alphabetic character
 * @c: The character to evaluate
 *
 * Return: 1 if c is a letter, lowercase or uppercase. Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
