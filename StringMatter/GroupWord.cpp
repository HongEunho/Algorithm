#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	scanf("%d", &N);
	char word[101] = { 0 };
	int flag = 0, count = 0;

	for (int i = 0; i < N; i++)
	{
		flag = 0;
		scanf("%s", word);
		for (int k = 0; k < strlen(word); k++)
		{
			if (word[k] != word[k + 1])
			{
				for (int j = k + 2; j < strlen(word); j++)
				{
					if (word[j] == word[k])
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
					break;
			}
		}
		if(flag==0)
			count++;
	}
	printf("%d", count);
	return 0;
}
