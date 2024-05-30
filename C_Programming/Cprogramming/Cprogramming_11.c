
/*함수와 포인터
* 인자를 가르키는 포인터는 int* 타입이 되면
* int*를 가르키는 포인터의 타입은? => int** 타입
* 상수 인자를 매개변수로 받을 순 있어도 값을 변경하는것은 불가능하다.
* 
* 함수 포인터
* 함수도 메모리상에 있는건가?
* -> 프로그램 코드 자체는 메모리상에 존재합니다. 
* 메모리상에 함수의 코드가 들어간 함수의 시작 주소를 가르키는것을 함수 포인터라 합니다.
* (함수의 리턴형)(*포인터 이름)(매개변수들...)
*/
#include <stdio.h>

int max(int a, int b);
void Euclidean();
void GetScoreAverage(int size);
int GCD(int i, int j);

int main()
{
	Euclidean();
	return 0;
}

int PointerFunc()
{
	int (*pmax)(int, int);
	pmax = max;
	printf("%d", pmax(3, 5));
}

int max(int a, int b)
{

	return a + b;
}

/*
* 문제 1
사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 
평균이 가장 높은 사람 부터 평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요. 
특히, 평균을 기준으로 평균 이상인 사람 옆에는 '합격', 아닌 사람은 '불합격' 
을 출력하게 해보세요 (난이도 : 中上).
*/
void GetScoreAverage(int size)
{
	int arr[5];
	int total = 0;
	int totalAverage = 0;
	for (int i = 0; i < size; i++)
	{
		total = 0;
		printf("%d 번째 학생의 수학 국어 영어 점수를 입력하세요\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			int score;
			printf(":");
			scanf_s("%d", &score);
			total += score;
		}
		printf("%d 번째 학생의 평균은 %d 입니다. \n", i+1, (total / 3));
		arr[i] = (total/3);
		totalAverage += arr[i];
	}

	totalAverage /= 5;

	for (int k = 0; k < sizeof(arr) / sizeof(int); k++)
	{
		if (arr[k] >= totalAverage)
		{
			printf("%d 번째 학생은 합격입니다.\n", k + 1);
		}
		else 
		{
			printf("%d 번째 학생은 불합격입니다.\n", k + 1);
		}
	}

}


/*
* 문제 2
* 유클리도 호제법을 이용해서 N 개의 수들의 최대공약수를 구하는 함수를 만들어보세요. 
유클리드 호제법이 무엇인지 모르신다면, 
인터넷 검색을 활용하는 것을 추천합니다. (댓글을 달아도 돼요) (난이도 : 中上)
*/

void Euclidean()
{
	int numArry[4];

	int total = 0;

	for (int i = 0; i < sizeof(numArry)/sizeof(int); i++)
	{
		printf("num :");
		scanf_s("%d", &numArry[i]);
	}


	int value = GCD(numArry[0], numArry[1]);
	total = (numArry[0] * numArry[1]) / value;

	for (int j = 2; j < sizeof(numArry) / sizeof(int); j++)
	{
		value = GCD(value, numArry[j]);
		total = (total * numArry[j]) / GCD(total, numArry[j]);
	}

	printf("%d\n", value);
	printf("%d", total);
}



int GCD(int i, int j)
{
	int a = j;
	int b = i;
	
	if (i > j)
	{
		a = i;
		b = j;
	}

	while (a % b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}

	return b;
}


/* 문제 3
* 자기 자신을 호출하는 함수를 이용해서 1 부터 특정한 수까지의 곱을 구하는 프로그램을 만들어보세요. (난이도 : 下)
*/


/* 문제 4
* 계산기를 만들어보세요. 사용자가 1 을 누르면 +, 2 를 누르면 - 와 같은 방식으로 
해서 만들면 됩니다. 
물론 이전의 계산 결과는 계속 누적되어야 하고, 
지우기 기능도 있어야 합니다. (물론 하나의 함수에 구현하는 것이 
아니라 여러개의 함수로 분할해서 만들어야겠죠?) (난이도 : 中)
*/


/* 문제 5
* N 진법에서 M 진법으로 변환하는 프로그램을 만들어보세요. (난이도 : 中)
*/

/* 문제 6
* 에라토스테네스의 체를 이용해서 1 부터 N 까지의 소수를 구하는 프로그램을 만들어보세요. (난이도 : 中)
*/

/*문제 7
* 1000 자리의 수들의 덧셈, 뺄셈, 곱셈,
* 나눗셈을 수행하는 프로그램을 만들어보세요. 
* 나눗셈의 경우 소수 부분을 잘라버리세요. 
* 물론, 소수 부도 1000 자리로 구현해도 됩니다.
* 1000 자리 수들의 연산 수행 시간은 1 초 미만이여야 합니다. (난이도 : 上)
*/
