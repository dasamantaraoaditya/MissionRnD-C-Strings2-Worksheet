/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include<stdio.h>
#include <stdlib.h>
int count_word_in_str_way_1(char *str, char *word){
	int i, len, k, l, count = 0;
	//for (len = 0; word[len] != '\0'; len++);
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == word[0])
		{
			k = i, l = 0;
			while (str[k] == word[l]){
				k++; l++;
				if (word[l] == '\0'){
					count++;
					break;
				}
			}
		}
	}
	return count;
	return  0;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

