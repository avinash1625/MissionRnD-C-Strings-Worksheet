/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *input, int k, int len)
{
	int i, j;
	char temp;
	for (i = k, j = len - 1; i < j; i++, j--)
	{
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;

	}
}

void str_words_in_rev(char *input, int len){
	int i, j;
	j = 0;
	for (i = 0; i < len; i++)
		 {
		if (input[i] == ' ')
			 {
			reverse(input, j, i);
			j = i + 1;
			}
		}
	reverse(input, j, len);
	reverse(input, 0, len);
	
}
