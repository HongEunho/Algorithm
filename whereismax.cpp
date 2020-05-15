#include <stdio.h>

int main()
{
	int index = 0, max = 0, num;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
			index = i;
		}
	}
	printf("%d\n%d", max, index + 1);
	return 0;
}