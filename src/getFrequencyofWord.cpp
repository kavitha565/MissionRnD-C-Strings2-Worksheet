/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	int i, j, count = 0, flag = 0;
	int strln = strlen(str);
	int wordln = strlen(word);
	for (i = 0; i < strln;)
	{
		j = 0;
		count = 0;
		while ((str[i] == word[j]))
		{
			flag++;
			i++;
			j++;
		}
		if (count == wordln)
		{
			count++;
			flag = 0;
		}
		else
			i++;
	}
	if (count != 0)
		return count;
	else
		return 0;

}

