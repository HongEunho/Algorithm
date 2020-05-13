#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		int length = 0, count = 0, score=0;
		char arr[80];
		scanf("%s", arr);
		length = strlen(arr);

		for (int j = 0; j <= length; j++)
		{
			if (arr[j] == 'X' || arr[j] == '\0')
			{
				for (int k = 1; k <= count; k++)
				{
					score += k;
				}
				count = 0;
				continue;
			}
			count++;
		}
		printf("%d\n", score);
	}
	return 0;
}