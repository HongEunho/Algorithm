#include <stdio.h>

int main()
{
	int N;
	float lie = 0.0f, max = 0.0f, sum = 0.0f;
	scanf("%d", &N);
	float score[1000] = { 0 };


	for (int i = 0; i < N; i++) //최대값 구하고
	{
		scanf("%f", &score[i]);
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < N; i++)
	{
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	lie = sum / N;
	printf("%.2f", lie);
	return 0;
}