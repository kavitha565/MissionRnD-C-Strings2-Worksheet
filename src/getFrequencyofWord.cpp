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
	int strln, wordln, i, j, k, flag = 0, count = 0;
	strln = strlen(str);
	wordln = strlen(word);

	for (i = 0; i<strln; i++)
	{
		if (str[i] == word[0] && ((str[i - 1] == ' ' || i == 0) && (str[i + wordln] == ' ' || str[i + wordln] == '\0')))
		{
			k = i + 1;
			for (k = i + 1, j = 1; j<wordln;)
			{
				if (str[k++] == word[j++])
				{
					flag++;
				}
			}
			if (flag == wordln - 1)
			{
				count++;
				flag == 0;
			}
		}
		else
		{
			flag = 0;
			k = i + 1;
			for (j = 1; j<wordln;)
			{
				if (str[k++] == word[j++])
				{
					flag++;
				}
			}
			if (flag == wordln - 1)
			{
				count++;
				flag == 0;
			}
		}
	}
	if (count != 0)
		return count;
	else
		return 0;

}

