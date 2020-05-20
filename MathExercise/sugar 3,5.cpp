#include <stdio.h>

int main()
{
	int n, a, b;
	scanf("%d", &n);

	for (int i = 0;; i++)
	{
		a = n / 5 - i;
		if (a < 0)
		{
			printf("-1");
			return 0;
		}
		b = n - (5 * a);
		if (b % 3 == 0)
		{
			printf("%d", a + b / 3);
			return 0;
		}
	}

	return 0;
}