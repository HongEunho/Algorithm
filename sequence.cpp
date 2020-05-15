#include <stdio.h>

int sequence(int num)
{
	int result=0, k, count=0;
	int a[3];
	for (int i = 1; i <= num; i++)
	{
		if (i < 100) result++;
		else if (i == 1000) break;
		else {
			count = 0, k = i;
			while (k > 0) {
				a[count++] = k % 10;
				k /= 10;
			}
			if (a[2] - a[1] == a[1] - a[0]) result++;
		}
	}
	return result;
}

int main()
{
	int num;
	scanf("%d", &num);
	int result = sequence(num);
	printf("%d", result);
	return 0;
}