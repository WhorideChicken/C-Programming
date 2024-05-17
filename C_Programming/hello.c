#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void Cesius();
void LoopExample();
void LoopExampleSecond();
void LoopExampThird();
void LoopExampleFourth();
void LoopFibonacci();
void LoopFactorial();
void LoopOptional();
void Factorization();
bool IsPrime(int num);

int main()
{
	Factorization();
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

//n�� �Է¹��� �� n������ ����
void LoopFactorial()
{
	int num;
	int sum = 1;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--)
	{
		sum *= i;
	}

	printf("sum = %d", sum);
}

//���� ���� �����ϴ� �ڿ��� a,b,c �� ������ ���Ͽ���
//a + b + c = 2000
//a �� b > c, a,b,c �� ��� �ڿ���(���� ����)
void LoopOptional()
{
	int count = 0;
	for (int i = 1; i < 2000; i++)
	{
		for (int j = 1; j < 2000 - i; j++)
		{
			int c = 2000 - i - j;
			if (i > j && j > c && c > 0)
			{
				count++;
			}
		}
	}
	printf("�����ϴ� �ڿ��� a, b, c �� ���� = %d\n", count);
}


//#include <math.h> : ������ ����� ����
//#include <stdbool.h> : bool ����� ����

void Factorization()
{
	int num;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (IsPrime(num))
	{
		printf("%d  *  %d\n", 1, num);
		return;
	}

	while (num % 2==0)
	{
		printf("%d ", 2);
		num /= 2;
	}

	//2�� �Ҽ��̹Ƿ� 2ĭ�� �̵�
	for (int i = 3; i * i <= num; i += 2)
	{
		while (num % i==0)
		{
			printf("%d ", i);
			num /= i;
		}
	}
}

// num�� ������ ���� �ٸ� ���� ���� �������ٸ� �� ���� num�� ����Դϴ�.
// �̴� �� '1'�� �ڽ��̿��� ����� �����Ѵٴ� ���̸�, �̴� num�� �Ҽ��� �ƴ��� �ǹ��մϴ�..
bool IsPrime(int num)
{
	if (num <= 1)
		return false;

	if (num == 2)
		return true;

	if (num % 2 == 0)
		return false;

	//¦���� �پ�ѱ� ����
	for (int i = 3; i <= sqrt(num); i+=2)
	{
		if (num % i == 0)
			return false;
	}

	return true;
}
