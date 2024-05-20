/*포인터 -4
* 
* 배열은 배열이고 포인터는 포인터다
* sizeof나 & 연산자를 사용하는 경우를 제외하면 배열의 이름은 첫번 째 원소를 가리킨다.
* arr[i]와 같은 문장은 사실 컴파일러에 의해 *(arr+i)로 변환된다.
* 
* 1차원 배열 가리키기
* 
*/

#include <stdio.h>
void PointerExample();

int main()
{
	PointerExample();
	return 0;
}

void PointerExample()
{
	int arr[3] = { 1,2,3 };
	int* parr;

	parr = arr;
	/*parr = &arr[0]과 같은것*/
	//parr++을하면 int 4바이트만큼 다음 주소를 가르키게 되도 다음 원소를 가르킨다.
	//그렇가면 arr만 사용하면 첫번째 주소를 변환하여 갖는다했는데
	//arr++이 가능할까?
	//-> 이문장은 단순 배열의 첫번째 원소를 가리키는 주고값 자체가 될뿐이라 (주소)++; 가 되므로 오류가 납니다.
	printf("%d\n", arr[1]);
	printf("%d\n", parr[1]);
	printf("%d\n", *parr);
}

/* 포인터의 포인터
* 
*/

void DoublePointer()
{

}