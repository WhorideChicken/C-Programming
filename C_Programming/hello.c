#include <stdio.h>

void Cesius();
void LoopExample();
void LoopExampleSecond();
void LoopExampThird();
void LoopExampleFourth();
void LoopFibonacci();
int main()
{
	LoopFibonacci();
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
//N ���� ���ﰢ���� ����Ѵ�.
void LoopExampThird()
{
	int count;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &count);
	int temp = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < (count + 2) - temp; ++j)
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
//1000 ������ 3 �Ǵ� 5 �� ����� �ڿ������� ���� ���Ѵ�.
void LoopExampleFourth()
{
	int sum = 0;
	for (int i = 0; i <= 1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	printf("sum %d", sum);
}

//1000000 ������ �Ǻ���ġ ���� 
//( N ��° ���� N - 1 ��° �װ� N - 2 ��° ������ ǥ���Ǵ� ����, ������ 1,1,2,3,5,8,...) �� ¦�� �׵��� ���� ���Ѵ�
void LoopFibonacci()
{
	int a = 1, b = 1;
	int sum = 0;
	int index = 2;

	while (b <= 1000000) {
		if (index % 2 == 0) {
			sum += b;
		}

		int next = a + b;
		a = b;
		b = next;
		index++;
	}

	printf("%d", sum);

}

