#include <stdio.h>

//�迭 �ڷ��� ������[������]
//C������ �迭�� ũ�⸦ ������ ���� ������ �� ���� ���� �Ǿ� �ִ�.
//��� : const : ó�� ���ǽ� �� ���� �ٷ� �־����� ������ �ٲ��� ����

/*
* ������ �� ����
���� 1
�� �Է¹޴� �л����� ������ ���� ������ �����ϴ� ���α׷��� ����� ������.
5��

���� 2
�Է¹��� �л����� ������ ���� �׷����� ��Ÿ���� ���α׷��� ����� ������.
*/

void Score();
void ScoreSecond();

int main()
{
	ScoreSecond();
	return 0;
}

//int�� 4����Ʈ�̹Ƿ� 4�� �����ش�.
void Score()
{
	int score[5];
	for (int i = 0; i < sizeof(score)/sizeof(int); i++)
	{
		printf("%d�� ������ �Է��� �ּ��� : ", i + 1);
		scanf_s("%d", &score[i]);
	}

	//sorting
	for (int i = 0; i < (sizeof(score) / sizeof(int) - 1); i++)
	{
		for (int j = 0; j < (sizeof(score) / sizeof(int) - 1); j++)
		{
			int temp = score[j + 1];
			if (score[j] < temp)
			{
				score[j + 1] = score[j];
				score[j] = temp;
			}
		}
	}

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("%d -- %d\n", i, score[i]);
	}
}

void ScoreSecond()
{
	int score[5];
	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("%d�� ������ �Է��� �ּ��� : ", i + 1);
		scanf_s("%d", &score[i]);
	}


	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("%d ��° �л� ���� :", i + 1);
		for (int j = 0; j < score[i]; j++)
		{
			printf("-");
		}
		printf("\n");
	}
}


