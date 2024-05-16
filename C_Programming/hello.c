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

	printf("섭씨 온도를 화씨 온도로 바꿔주는 함수입니다.\n");
	printf("섭씨 온도를 입력해 주세요 : ");
	scanf_s("%lf", &celsius);

	printf("섭씨 %f 도는 화씨로 %f 도 입니다.\n", celsius, 9 * celsius / 5 + 32);
}
