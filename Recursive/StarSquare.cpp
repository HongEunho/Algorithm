#include <stdio.h>
#include <math.h>

char star[2182][2182] = { 0 };
void divide(int x, int y, int size)
{
	if (size == 1)
	{
		star[x][y] = '*';
		return;
	}
	int d = size / 3;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
				continue;
			divide(x + i * d, y + j * d, d);
		}
}

int main()
{
	int n;
	scanf("%d", &n);
	divide(0, 0, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%c", star[i][j]);
		printf("\n");
	}
	return 0;
}