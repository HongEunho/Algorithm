#include <stdio.h>

int d(int num)
{
	int sum = num;
	while (1)
	{
		if (num / 10 == 0)break;
		sum = sum + (num % 10);
		num = num / 10;
	}
	sum += num;
	return sum;
}
int a[10030] = { 0 };
int main()
{

	for (int i = 1; i <= 10000; i++)
	{
		int check = d(i);
		a[check] = check;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (a[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}