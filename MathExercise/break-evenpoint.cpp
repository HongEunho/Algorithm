#include <stdio.h>

int main()
{
	int a, b, c, sum, point = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (c - b <= 0)
	{
		printf("-1");
		return 0;
	}
	else {
		printf("%d", a / (c - b) + 1);
	}

	return 0;
}