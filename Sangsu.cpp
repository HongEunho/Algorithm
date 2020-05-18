#include <stdio.h>

int main()
{
	int a, b, na, nb;
	int a1, a2, a3, b1, b2, b3;
	scanf("%d %d", &a, &b);
	a1 = a % 10; b1 = b % 10;
	a = a / 10;  b = b / 10;
	a2 = a % 10; b2 = b % 10;
	a = a / 10;  b = b / 10;
	a3 = a % 10; b3 = b % 10;
	na = a1 * 100 + a2 * 10 + a3;
	nb = b1 * 100 + b2 * 10 + b3;
	
	printf("%d", na > nb ? na : nb);
	return 0;
}