#include <stdio.h>

int fibonacci(int n)
{
	if (n == 1 || n == 0)
		return n;
	return fibonacci(n - 1) + fibonacci(n-2);
}

int main()
{
	int num, result;
	scanf("%d", &num);
	if (num < 2)
	{
		printf("%d", num);
		return 0;
	}
	if(num>=2)
		result = fibonacci(num);
	printf("%d", result);
	return 0;
}