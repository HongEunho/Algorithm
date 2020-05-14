#include <stdio.h>

int main()
{
	int a = { 0 };
	int arr[42];
	int count = 0, flag = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		arr[a % 42]++;

		if (arr[a % 42] == 1)
			count++;
	}


	printf("%d", count);
	return 0;
}