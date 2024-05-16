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

	printf("섭씨 온도를 화씨 온도로 바꿔주는 함수입니다.\n");
	printf("섭씨 온도를 입력해 주세요 : ");
	scanf_s("%lf", &celsius);

	printf("섭씨 %f 도는 화씨로 %f 도 입니다.\n", celsius, 9 * celsius / 5 + 32);
}


void LoopExample()
{
	int subject, score;
	double sum = 0;

	printf("몇 개의 과목 점수를 입력 받을 것인가요?");
	scanf_s("%d", &subject);

	printf("\n 각 과목의 점수를 입력해 주세요 \n");
	for (int i = 0; i < subject; i++)
	{
		printf("과목 %d : ", i);
		scanf_s("%d", &score);
		sum += score;
	}

	printf("모든 과목의 평균은 : %.2f", sum/subject);
}