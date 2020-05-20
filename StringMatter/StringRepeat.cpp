#include <stdio.h>
#include <string.h>

int main()
{
	int num, repeat=0;
	char str1[21] = { 0 }, str2[165] = { 0 };
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %s", &repeat, str1);
		for (int j = 0; j < strlen(str1)*repeat; j++)
		{
			str2[j] = str1[j / repeat];
		}
		printf("%s\n", str2);
	}
}
