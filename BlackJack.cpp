#include <stdio.h>

int main()
{
	int N, M, tmp=0;
	int c[100];
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &c[i]);

	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				int sum = c[i] + c[j] + c[k];
				if (sum <= M && sum > tmp)
				{
					tmp = sum;
					printf("%d\n", tmp);
				}
			}
	printf("%d", tmp);

	return 0;
}