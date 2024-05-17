#include <stdio.h>

void Cesius();
void LoopExample();
void LoopExampleSecond();
void LoopExampThird();


int main()
{
	LoopExampThird();
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


//for(;;) -> (���ǹ�) ���� ���ǹ��� ������ �׻� ���̶� �ν� �Ǳ� ������ ���� ����
//Ż�� �Ϸ��� �߰� ���ǿ� break ȣ��
//Ư�� ������ ����Ϸ��� continue
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

	printf("��� ������ ����� : %.2f", sum / subject);
}

//N ���� �ﰢ���� ����Ѵ�.
//	scanf_s(" : %d", &count); ó�� ���� ������ �տ� :�� ������ ���� �߻�
void LoopExampleSecond()
{
	int count;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &count);
	int temp = count - 1;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < i + count; j++)
		{
			if (j < temp)
				printf(" ");
			else
				printf("*");
		}
		temp--;
		printf("\n");
	}

}


//TODO : ���Ƕ�̵�
void LoopExampThird()
{
	int count;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &count);
	int temp = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < (count+2)-temp; ++j)
		{
			if (j < temp)
				printf(" ");
			else
				printf("*");
		}
		temp++;
		printf("\n");
	}

}