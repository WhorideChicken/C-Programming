/*포인터 -2
* 포인터 배워서 어디에 사용할까?
* 상수 포인터
* int, float, double과 같은 상수 변수와 같이 포인터에도 const를 붙일 수 있다.
* '절대로 바뀌지 않을 것 같은 값에는 무조건 const 키워드를 붙여주는 습관'
*/
#include <stdio.h>
void ExampleOne();
void ExampleTwo();

int main()
{

	return 0;
}

void ExampleOne()
{
	int a;
	int b;
	const int* pa = &a;

	//*pa = 3; -> 올바르지 않은 문장
	//const의 문맥을 이해하면 데이터의 값은 절대로 바뀌면 안된다 라는 키워드입니다.
	// 즉 pa는 int형 변수를 가르키는데 해당 변수의 값을 절대로 바꾸지 말라라는 의미입니다.
	// pa가 가르키는 주소의 변수의 값을 바꾸지 말라, 가르키는 주소는 바꿀 수 있기 떄문에
	//아래의 문장이 사용 가능
	pa = &b;  // 올바른 문장
}

void ExampleTwo()
{
	int a;
	int b;
	int* const pa = &a;

	*pa = 3;  // 올바른 문장
	
	//ExampleOne의 예제와 다르게
	// 여기서 const는 pa 앞에 붙었습니다.
	// 즉 const 키워드의 뜻을 이해한다면 pa의 값이 절대 바뀌면 안됩니다.
	// 즉 pa가 가르키는 주소에 있는 데이터의 값을 바꿔도 되지만 pa가 가르키는 주소의 값은 바뀌면 안되는 겁니다.
	//pa = &b;  // 올바르지 않은 문장
}