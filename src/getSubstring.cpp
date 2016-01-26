/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
char * get_sub_string(char *str, int i, int j){
	int len, k = 0;
	if (str == NULL || i>j)
		return NULL;

	for (len = 0; str[len] != '\0'; len++);
	char * sub_str = (char *)malloc(sizeof(char)*(j - i + 1));
	while (i <= j)
	{
		sub_str[k++] = str[i];
		i++;
	}
	sub_str[k] = '\0';
	return sub_str;
}
