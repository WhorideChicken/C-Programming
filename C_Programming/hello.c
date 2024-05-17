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

//n을 입력받은 후 n까지의 곱셈
void LoopFactorial()
{
	int num;
	int sum = 1;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--)
	{
		sum *= i;
	}

	printf("sum = %d", sum);
}

//다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라
//a + b + c = 2000
//a ＞ b > c, a,b,c 는 모두 자연수(양의 정수)
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
	printf("만족하는 자연수 a, b, c 의 개수 = %d\n", count);
}


//#include <math.h> : 제곱근 사용을 위해
//#include <stdbool.h> : bool 사용을 위해

void Factorization()
{
	int num;
	printf("숫자를 입력하세요 : ");
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

	//2는 소수이므로 2칸씩 이동
	for (int i = 3; i * i <= num; i += 2)
	{
		while (num % i==0)
		{
			printf("%d ", i);
			num /= i;
		}
	}
}

// num이 제곱근 이후 다른 수로 나눠 떨어진다면 그 수는 num의 약수입니다.
// 이는 곧 '1'과 자신이외의 약수가 존재한다는 것이며, 이는 num이 소수가 아님을 의미합니다..
bool IsPrime(int num)
{
	if (num <= 1)
		return false;

	if (num == 2)
		return true;

	if (num % 2 == 0)
		return false;

	//짝수를 뛰어넘기 위해
	for (int i = 3; i <= sqrt(num); i+=2)
	{
		if (num % i == 0)
			return false;
	}

	return true;
}
