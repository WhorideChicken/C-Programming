#include <stdio.h>

void Cesius();
void LoopExample();

int main()
{
	LoopExample();
	return 0;
}


//float : %f
//int : %d
//short : %hd
//long : %ld
//double : %lf
//char : %c
void Cesius()
{
	double celsius;

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� �Լ��Դϴ�.\n");
	printf("���� �µ��� �Է��� �ּ��� : ");
	scanf_s("%lf", &celsius);

	printf("���� %f ���� ȭ���� %f �� �Դϴ�.\n", celsius, 9 * celsius / 5 + 32);
}


void LoopExample()
{
	int subject, score;
	double sum = 0;

	printf("�� ���� ���� ������ �Է� ���� ���ΰ���?");
	scanf_s("%d", &subject);

	printf("\n �� ������ ������ �Է��� �ּ��� \n");
	for (int i = 0; i < subject; i++)
	{
		printf("���� %d : ", i);
		scanf_s("%d", &score);
		sum += score;
	}

	printf("��� ������ ����� : %.2f", sum/subject);
}