#include <stdio.h>

int main()
{
	int x, y, cnt=0;
	char chess[51][51] = { 0 };
	scanf("%d %d", &x, &y);
	for(int i=0;i<x;i++)
		scanf("%s", chess[i]);
	
	int tmp = 10000, min = 10000;

	//������ �̵�
	for (int i = 0; i + 8 <= x; i++)
	{
		for (int j = 0; j + 8 <= y; j++)
		{
			char ch = chess[i][j]; //ù ĭ
			cnt = 0; //���� �ʱ�ȭ	

			for (int p = i; p < i + 8; p++) //�˻� �� �ѹ���
			{
				for (int q = j; q < j + 8; q++)
				{
					if ((i + j) % 2 == 0) //ù ĭ�� ¦¦ or ȦȦ
					{
						if ((p + q) % 2 == 0) //�˻� ĭ�� ¦¦ or ȦȦ �̸�
						{
							if (chess[p][q] != ch)
								cnt++;
						}
						else
							if (chess[p][q] == ch)
								cnt++;
					}
					else //ù ĭ�� ¦Ȧ or Ȧ¦
					{
						if ((p + q) % 2 == 0) //�˻� ĭ�� ¦¦ or ȦȦ �̸�
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