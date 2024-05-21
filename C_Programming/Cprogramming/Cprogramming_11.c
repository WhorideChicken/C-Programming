
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

int main()
{
	int (*pmax)(int, int);
	pmax = max;
	printf("%d", pmax(3, 5));
	return 0;
}

int max(int a, int b)
{
	return a + b;
}