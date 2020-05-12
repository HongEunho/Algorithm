#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		int num = 0, sum = 0, count = 0;
		double avg;
		scanf("%d", &num);
		int arr[1000];
		for (int j = 0; j < num; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		avg = sum / num;
		for (int k = 0; k < num; k++)
			if (arr[k] > avg)
				count++;
		printf("%.3lf%%\n", (double)count / num * 100);
	}
	return 0;
}