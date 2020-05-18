#include <stdio.h>
#include <string.h>

char word[1000001];
int main()
{
	//abcde'' word[7]
	//word[0],word[1]....word[6]
	//length = 6
	
	int count = 1;
	gets_s(word);
	int length = strlen(word);
	for (int i = 0; i < length; i++)
	{
		if (i==0 && word[i] == ' ')
			continue;
		if (i==length-1 && word[length - 1] == ' ')
			continue;
		if (word[i] == ' ')
			count++;	
	}
	if (length == 1 && word[0] == ' ')
		count--;
	printf("%d", count);
}