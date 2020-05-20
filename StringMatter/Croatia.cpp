#include <stdio.h>
#include <string.h>

int main()
{
	char alpha[300] = { 0 };
	scanf("%s", alpha);
	int len = strlen(alpha);
	int count = len;
	for (int i = 0; i < len; i++)
	{
		//1
		if (alpha[i] == '=')
		{
			if (alpha[i - 1] == 'c' || alpha[i - 1] == 's')
				count--;	
			else if (alpha[i - 1] == 'z')
			{
				if (alpha[i - 2] == 'd')
					count -= 2;
				else
					count--;
			}
		}
		if (alpha[i] == '-')
			if (alpha[i - 1] == 'c' || alpha[i - 1] == 'd')
				count--;
		
		if (alpha[i] == 'j')
			if (alpha[i - 1] == 'l' || alpha[i - 1] == 'n')
				count--;
		
	}
	printf("%d", count);
	return 0;
}
