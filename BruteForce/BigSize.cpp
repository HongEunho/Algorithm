#include <stdio.h>

typedef struct people {
	int tall;
	int weight;
	int rank;
}people;

int main()
{
	int N;
	people p[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &p[i].weight, &p[i].tall);
		p[i].rank = 1;
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (p[i].tall < p[j].tall && p[i].weight < p[j].weight)
			{
				p[i].rank++;
			}
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", p[i].rank);
	return 0;
}