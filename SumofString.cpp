#include <stdio.h>

int main()
{
	int num, sum = 0;
	char c[101];
	scanf("%d", &num);
	scanf("%s", c);
	for (int i = 0; i < num; i++)
	{
		sum += (c[i] - '0');
	}
	printf("%d", sum);
}