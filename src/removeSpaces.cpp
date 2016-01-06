/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int i, j, len;
	for (i = 0; str[i]; i++);
	len = i;
	if (len <= 0 || str == '\0')
		return '\0';
	for (i = 0; str[i];i++)
	{
		if (str[i] == ' '){
			len = len - 1;
			for (j = i; j < len; j++)
				str[j] = str[j + 1];
			str[len] = '\0';
		}
	}
		return str[2];
}