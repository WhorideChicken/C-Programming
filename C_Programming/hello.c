#include <stdio.h>

void Cesius();

int main()
{
	Cesius();
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
