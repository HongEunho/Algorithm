#include <stdio.h>
#include <string.h>

int main()
{
	char dial[16] = { 0 };
	int count = 0;
	scanf("%s", dial);

	for (int i = 0; i < strlen(dial); i++)
	{
		if (dial[i]<'S') { count += (dial[i] - 'A') / 3 + 3; }
		else if(dial[i]<'Z') { count += (dial[i] - 'A' - 1) / 3 + 3; }
		else if (dial[i] == 'Z') { count += 10; }
	}
	printf("%d", count);
	return 0;
}
