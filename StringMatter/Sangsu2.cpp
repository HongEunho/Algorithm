#include <stdio.h>
#include <string.h>

int main()
{
	char num1[4] = { 0 }, num2[4] = { 0 }, big[4] = { 0 };
	
	scanf("%s %s", num1, num2);
	for (int i = 2; i >= 0 ; i--)
	{
		if (num1[i] > num2[i])
		{
			strcpy(big, num1); break;
		}
		else if (num2[i] > num1[i])
		{
			strcpy(big, num2); break;
		}
	}

	printf("%c%c%c",big[2],big[1],big[0]);
	return 0;
}
