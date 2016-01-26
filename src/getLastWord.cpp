/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdlib.h>
#include<stddef.h>
char * get_last_word(char * str){
	int str_len, end = 0, i = 0;
	char *sub_str = NULL;
	for (str_len = 0; str[str_len] != '\0'; str_len++);
	//	printf("%d",str_len);
	str_len--;
	while (str[str_len] == ' '&&str_len >= 0)
		str_len--;
	//	printf("%d",str_len);			
	end = str_len;
	while (str[str_len] != ' '&&str_len >= 0)
		str_len--;
	//	printf("%d",str_len);
	int org_len = end - str_len;
	sub_str = (char *)malloc(sizeof(char)*(org_len));
	for (++str_len; str_len <= end; str_len++)
		sub_str[i++] = str[str_len];
	sub_str[i] = '\0';
	return sub_str;
}