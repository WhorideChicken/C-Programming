/*함수
* 반환값 함수명()으로 이름을 짓는다.
* 함수 중간에 return을 만나면 함수는 종료 되어 호출하였던 부분으로 돌아간다.
* 
* main함수
* C언어로 프로그램을 실하 할 때 컴퓨터는 main 함수부터 찾습니다. 즉 컴퓨터는 프로그램을 실행 할 떄
* 프로그램의 main 함수를 호출함으로써 시작합니다. main 함수가 없으면 컴퓨터는 프로그램의 어디서 부터 실행 할 지
* 모르게 되어 오류가 납니다.
* main 함수의 return 0은 운영체제가 받읍니다.
* main함수가 정상적으로 종료 되면 0을 리턴하고 비정산적으로 종료 되면 1을 리턴한다고 규정 되어 있습니다.
* 
* 
* 함수의 인자
* 함수에 매개변수를 전달하여 값을 변화시킨다.
* call by value와 call by reference를 생각해보기
*/

int MagicBox(int value);
void SlaveMoney(int totalMoney, int earnMoney);
void SumNumber(int endPoint);
void PrintPrime(int value);

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool IsPrimeTwo(int value);
int slave(int my_money);
void factorize(int value);

int slave(int my_money) {
	my_money += 10000;
	return my_money;
}
int mainTemp()
{
	/*slave함수의 my_money와 main 함수의 my_money는 완전히 다른 값으로 서로에게 영향을 줄 수 없다
	slave 함수의 my_money는 main함수의 my_money와 가은 값을 가진 채로 초기화 된 메모리 상의 또 다른 변수 이기 때문이다.

	다른 함수에서 정의 된 변수 값을 수정하려면 포인터를 이용하면 됩니다.
	*/
	//int my_money = 100000;
	//printf("2009.12.12 재산 : $%d \n", slave(my_money));
	//printf("my_money : %d", my_money);
	
	factorize(100);
	return 0;
}

/*
* 문제 1
이 강좌 최상단에서 이야기 했던 마술 상자를 함수로 제작해보세요 (난이도 : 못한다면 강좌를 다시 읽어보아야 할 것입니다)
*/

int MagicBox(int value)
{
	return value + 4;
}

/*
문제 2
어느날 귀족이 돈벌이가 시원치 않아져서 
이전에는 일정하게 10000 달러씩 챙겼지만 이제 일정치 않은 수입을 얻게 되었습니다. 
여러분은 slave 함수를 인자를 2 개를 가져서, 
하나는 현재 귀족의 재산, 다른 하나는 오늘 귀족의 수입을 인자로 전달받는 새로운 함수를 만들어 보세요 (난이도 : 下)
*/

void SlaveMoney(int totalMoney, int earnMoney)
{
	totalMoney += earnMoney;
	printf("Total = %d", totalMoney);
	printf("Earn = %d", earnMoney);

}

/*
* 문제 3
1 부터 n 까지의 합을 구하는 함수를 작성해보세요.
수학적인 공식을 써도 되지만 for 문으로 작성하는 것이 연습 하는데에는 도움이 될듯 합니다. (난이도 : 下)
*/

void SumNumber(int endPoint)
{
	int sum = 0;
	for (int i = 1; i <= endPoint; i++)
	{
		sum += i;
	}
}

/*
* 문제 4
N 값을 입력 받아서 1 부터 N 까지의 소수의 개수를 출력하는 함수를 제작해보세요.
소수 : 약수가 1과 자기 자신인 자연수들
0과 1은 소수가 아니다, 2는 소수이다, 짝수는 소수가 아니다 
3부터 나누기를 시작한다
sqrt를 사용하는 이유 : 입력 수의 제곱근 까지만 나누어보면 되기 때문에
O(루트N)의 시간 복잡도를 가집니다.
제곱근으로 나누는 이유 : 어떤수 N의 약수는 대칭적으로 쌍을 이루기 때문에
제곱급하면 전체 약수를 순회하지 않아도 되기 때문에
*/
void PrintPrime(int value)
{
	int count = 0;

	for (int i = 0; i <= value; i++)
	{
		if (IsPrimeTwo(i))
		{
			count++;
			printf("%d\n", i);
		}
	}

	printf("%d까지 소수의 개수는 %d개입니다.", value, count);

}

bool IsPrimeTwo(int value)
{
	if (value <= 1)
		return false;
	

	if (value == 2)
		return true;

	if (value % 2 == 0)
		return false;
		

	for (int i = 3; i <= sqrt(value); i+=2)
	{
		if (value % i == 0)
			return false;
	}

	return true;
}

/*
문제 5
특정한 수 N 을 입력받아서 N 을 소인수분해한 결과가 출력되게 해보세요 (난이도 : 中)

예) factorize(10); 출력결과 : 2 × 5

factorize(180); 출력결과 : 2 × 2 × 3 × 3 × 5

1과 그 아래 값은 인수 분해 의미가 없기 떄문에 잘 못 된 표현으로 넘기고
2로 나눠서 나머지가 0일 때 까지 나누며 2를 출력하게 한다
그뒤 3부터 시작해 홀수(2로 이미 다 나눴으니) 남은 temp값의 제곱근만큼(인수가 대칭을 이루기 때문)
2씩 건너뛰며 i만큼 나눠 준다.
//
*/

void factorize(int value)
{
	if (value <= 1)
	{
		printf("worng\n");
		return;
	}

	int temp = value;
	while (temp % 2 == 0)
	{
		temp /= 2;
		printf("%d  ", 2);
	}

	//2로 나눈 과정을 이미 거쳤기 때문
	for (int i = 3; i <=sqrt(temp); i += 2)
	{
		while (temp % i == 0)
		{
			temp /= i;
			printf("%d  ", i);
		}
	}

	if (temp > 1)
		printf("%d", temp);
}