/* ���� �迭
* �迭�� int arr[]�� ���� ���Ǵ� ���Ѵ�.
* �迭�� ũ��� ������ �������� �ʱ� ������ �迭�� ���� �� �� ũ�⸦ ���� ����������մϴ�.
* ���� �迭�� ��� �� ���ڸ� ũ��� ����� ������ ���� �ڸ��� �迭 ũ����� ��Ȯ�� ������ ����մϴ�.
*/

/*����1
*  �迭�� �� C ����� ����Ʈ ���� ������ ������.
��, �� �� ����, �� �� ����, ȣ �� ������ ��� �迭�� ����ȭ �ϰ� �ִ� ���� ������ ������
* -> �ϳ��� �迭 ������ ����Ʈ 1���� ���� �ǹ��� �� �ֽ��ϴ�.
* -> �迭�� ���� �迭���� ���� �ڸ����� ���� �ǹ� �� �� �ְ�
* -> �� �ڸ��� ���� �ش� ���� ��ȣ���� �ִ��� ǥ�� �� �� �ֽ��ϴ�.
*/

/* ���� �迭�� ������ ���ϱ�
* �迭 ��ü ũ�� / �迭1���� ũ�� -> ������ �迭���� ��� ���� �̷��� �ִ��� �� �� ����
* �迭 1���� ũ�� / �迭 �ڷ����� ũ�� -> ������ �迭���� 1���� �迭�� ��� ���ڰ� �ִ��� �� �� ����
*/
#include <stdio.h>
void StudentScore();

int main()
{
	StudentScore();
	return 0;
}

void StudentScore()
{
	int scoreArray[3][3];

	for (int i = 0; i < sizeof(scoreArray) / sizeof(scoreArray[0]); i++)
	{
		printf("%d��° �л��� ������ �Է��մϴ�\n", i + 1);
		for (int j = 0; j < sizeof(scoreArray) / sizeof(scoreArray[0]); j++)
		{
			int socre;
			if (j == 0)
			{
				printf("���� ������ �Է��ϼ��� :");
				scanf_s("%d", &socre);
			}
			else if (j == 1)
			{
				printf("���� ������ �Է��ϼ��� :");
				scanf_s("%d", &socre);
			}
			else
			{
				printf("���� ������ �Է��ϼ��� :");
				scanf_s("%d", &socre);
			}

			scoreArray[i][j] = socre;
		}
		printf("\n");
	}


	for (int i = 0; i < sizeof(scoreArray) / sizeof(scoreArray[0]); i++)
	{
		printf("%d��° �л��� ����\n", i + 1);
		for (int j = 0; j < sizeof(scoreArray) / sizeof(scoreArray[0]); j++)
		{
			if (j == 0)
			{
				printf("���� ���� = %d \n", scoreArray[i][j]);
			}
			else if (j == 1)
			{
				printf("���� ���� = %d \n", scoreArray[i][j]);
			}
			else
			{
				printf("���� ���� = %d \n", scoreArray[i][j]);
			}
		}
	}
}
