#include <stdio.h>
/*switch문의 input되는 변수는 반드시 정수 데이터를 보관하는 변수여야한다.
char, short, int, long

switch문과 if문을 나눠 사용하는 이유
if문은 조건문절이 있으면 해당 조건이 될 때까지 모든 조건문을 비교한다
switch문 경우 내부적으로 jump table을 생성합니다.
jump table은 프로그램 초기에 작성 되기 때문에 switch문이 실행되기 전에 작성된다.
때문에 case뒤에 뭐가 들어올지 모르는 변수가 아닌 값으로 선언해야하는것이고
if문과 달리 input 값이 들어오면 미리 작성 된 jump table의 해당 위치로 이동하기 때문에
다른 조건문을 비교하지 않고 바로 실행 합니다.
따라서, switch 문을 이용하면 case 에 따라 CMP 연산이 늘어나는 것이 아니라 
jump table 의 크기만 커질 뿐 성능에 있어서는 전혀 영향을 받지 않게 됩니다.

단 switch문의 효율을 위해서 
 case 의 '값' 들의 크기가 그다지 크지 않아야 하고, '값' 들이 순차적으로 정렬되어 있고, 
그 '값' 끼리의 차이가 크지 않다면최고로 효율적인 switch 문을 이용할 수 있게 됩니다.


문제 2
앞서, switch 문이 내부적으로 처리 되는 부분에서
case 1: ~ case 10: 일 때 만 생각하였는데, 
만약 case 1:, case 3:, case 4:, case 10: 과 같이 불규칙 적으로 switch 문이 적용된다면 
컴퓨터는 jump table 를 어떻게 작성할까요 (난이도 : 最上)

컴파일러 최적화에 따라 다르지만 적절히 if-else 와 index 기반 jmp 를 섞어 
불규칙한 값에 대해선 내부적으로 이진 탐색, 해시 테이블, if-else문을 혼합해여 최적의 분기 처리를 한다.
*/

/*형변환
임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입하라. 
예를들어 사용자로부터 입력받은 실수 f 가 
12.3456이라면 34만 추출한다. 이때 반올림은 고려하지 않아도 상관없다. 
f 가 달러 단위의 화폐 액수라고할 때 센트 단위만 추출해내는 경우라고 생각하면 된다. 
다음 ???? 자리에 적합한 연산식을 작성하는 문제이다.
*/

void TypeCastExample();

int main()
{
	TypeCastExample();
	return 0;
}

void TypeCastExample()
{
	float f = 0.0f;
	int i;
	int temp = 0;
	printf("실수를 입력하시오 : ");
	scanf_s("%f", &f);
	temp = (int)f * 100;
	i = (int)(f * 100);
	printf("i=%d\n", i - temp);
}