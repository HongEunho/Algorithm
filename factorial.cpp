#include <stdio.h>

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int num, result;
	scanf("%d", &num);
	result = factorial(num);
	printf("%d", result);
	return 0;
}