#include <stdio.h>
#include <string.h>

char str[10000001];
int main()
{

	int alpha[26] = { 0 };
	char c;
	int max = 0, count = 0, index = 0, flag = 0;
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		alpha[str[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			index = i;
			flag = 0;
		}
		else if (alpha[i] == max)
			flag = 1;
	}

	if (flag == 1)
		printf("?");
	else
		printf("%c", 65 + index);
	return 0;
}