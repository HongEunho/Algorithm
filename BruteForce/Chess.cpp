#include <stdio.h>

int main()
{
	int x, y, cnt=0;
	char chess[51][51] = { 0 };
	scanf("%d %d", &x, &y);
	for(int i=0;i<x;i++)
		scanf("%s", chess[i]);
	
	int tmp = 10000, min = 10000;

	//±âÁØÁ¡ ÀÌµ¿
	for (int i = 0; i + 8 <= x; i++)
	{
		for (int j = 0; j + 8 <= y; j++)
		{
			char ch = chess[i][j]; //Ã¹ Ä­
			cnt = 0; //°³¼ö ÃÊ±âÈ­	

			for (int p = i; p < i + 8; p++) //°Ë»ç ÁÙ ÇÑ¹ÙÄû
			{
				for (int q = j; q < j + 8; q++)
				{
					if ((i + j) % 2 == 0) //Ã¹ Ä­ÀÌ Â¦Â¦ or È¦È¦
					{
						if ((p + q) % 2 == 0) //°Ë»ç Ä­ÀÌ Â¦Â¦ or È¦È¦ ÀÌ¸é
						{
							if (chess[p][q] != ch)
								cnt++;
						}
						else
							if (chess[p][q] == ch)
								cnt++;
					}
					else //Ã¹ Ä­ÀÌ Â¦È¦ or È¦Â¦
					{
						if ((p + q) % 2 == 0) //°Ë»ç Ä­ÀÌ Â¦Â¦ or È¦È¦ ÀÌ¸é
						{
							if (chess[p][q] == ch)
								cnt++;
						}
						else
							if (chess[p][q] != ch)
								cnt++;
					}
				}
			}
			if (tmp > cnt)
			{
				tmp = cnt;
			}
		}
	}

	printf("%d", tmp);
	return 0;
}