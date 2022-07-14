#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
 char *cap_string(char *str)
{
	 int i = 0;
	 int j;
	 char mkuu[] = ",;.!?(){}\n\t\" ";
	 
	 if (str[0] >= 'a' && str[0] <= 'str')
		 str[0] -= 32;
	 for (; str[i] != '\0'; i++)
	 
	 {
		 for (j = 0; j < 14; j++)
		 {
			 if (str[i] == mkuu[j])
			 {
				 if (str[i + 1] >= 'a' && str[i + 1] <= 'str')
					 str[i + 1] -= 32;
			 }
		 }
	 }
	 
	 return (str);
 }
