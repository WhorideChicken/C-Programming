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

	printf("섭씨 온도를 화씨 온도로 바꿔주는 함수입니다.\n");
	printf("섭씨 온도를 입력해 주세요 : ");
	scanf_s("%lf", &celsius);

	printf("섭씨 %f 도는 화씨로 %f 도 입니다.\n", celsius, 9 * celsius / 5 + 32);
}
//for(;;) -> (조건문) 에서 조건문이 없으면 항상 참이라 인식 되기 때문에 무한 루프
//탈출 하려면 중간 조건에 break 호출
//특정 조건을 통과하려면 continue
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

	printf("모든 과목의 평균은 : %.2f", sum / subject);
}
//N 줄인 삼각형을 출력한다.
//	scanf_s(" : %d", &count); 처럼 형식 지정자 앞에 :를 넣으면 오류 발생
void LoopExampleSecond()
{
	int count;
	printf("숫자를 입력하시오 : ");
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
//N 줄인 역삼각형을 출력한다.
void LoopExampThird()
{
	int count;
	printf("숫자를 입력하시오 : ");
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
//1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.
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

//1000000 이하의 피보나치 수열 
//( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
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

