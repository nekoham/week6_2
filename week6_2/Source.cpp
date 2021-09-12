#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// find all alphabets and lower case. alphabet-lower = upper. print both of them.
	int lower = 0, alphabet = 0;
	char input[500], * p;
	p = input;
	printf("Enter your input : ");
	scanf("%s", input);

	for (int i = 0; p[i] != '\0'; i++)
	{
		if ((p[i] >= 65 && p[i] <= 90) || (p[i] >= 97 && p[i] <= 122)) 
		{ 
			alphabet += 1;
			if (p[i] >= 97 && p[i] <= 122) 
			{ 
				lower += 1; 
			} 
		} 
		
	}

	printf(" Uppercase count : %d\n", alphabet-lower);
	printf(" Lowercase count : %d", lower);

	return 0;
}