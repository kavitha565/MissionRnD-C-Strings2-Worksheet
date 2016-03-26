/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<malloc.h>
char * get_last_word(char * str){
	if (str==NULL)
	return NULL;
	else
	{
		int i = 0, j, k, x = 0;
		char *res=(char*)malloc(10*sizeof(char));
		while (str[i] != '\0')
		{
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			if (str[j] == ' '||j<0)
			{
				for (k = j + 1; str[k] != '\0'; k++)
				{
					res[x] = str[k];
					x++;
				}
				if (str[k] == '\0')
					break;
			}
		}
		res[x] = '\0';
		return res;
	}
}
