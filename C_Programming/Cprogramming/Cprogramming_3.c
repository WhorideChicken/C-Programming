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
void Sorting(int scoreArray[]);
int main()
{
	Score();
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

	Sorting(score);
}

void Sorting(int scoreArray[])
{

}