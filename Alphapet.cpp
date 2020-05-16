#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int pos[26];
	memset(pos, -1, sizeof(int) * 26);
	scanf("%s", str);
	for (int i = 0; i < 26; i++) //알파벳
		for (int j = 0; j < strlen(str); j++) //문자열
			if (str[j] == 'a' + i)
			{
				pos[i] = j;
				break;
			}	
		
	for (int i = 0; i < 26; i++)
		printf(" %d", pos[i]);
}