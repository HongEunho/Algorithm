#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int arr[10000];
	int min = 10000, max = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d %d", min, max);
	return 0;
}
