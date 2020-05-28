#include <stdio.h>

int make(int num)
{
	int sum = num;
	while (true)
	{
		sum += num % 10;
		num /= 10;
		if (num / 10 == 0)
		{
			sum += num;
			break;
		}
	}
	return sum;
}

int main()
{
	int n, k;
	scanf("%d", &n);

	for (int i = 0; i < 999999; i++)
	{
		if(n == make(i))
		{
			k = i;
			break;
		}
	}
	printf("%d", k);
	return 0;
}