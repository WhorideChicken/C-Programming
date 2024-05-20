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
void DoublePointer();
void ArrayPointrerExample();

int main()
{
	ArrayPointrerExample();
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
* 포인터를 가르키는 포인터
* pa는 a의 주고값을 가르키고 ppa는 pa의 주소를 가르킨다.
* *pa는 a의 값을 가르키고 *ppa는 pa의 주소를 가르킨다 => **ppa는 결국 *(*ppa)가 되므로 a를 지칭하게 된다.
*/

void DoublePointer()
{
	int a;
	int* pa;
	int** ppa;

	pa = &a;
	ppa = &pa;
	
	a = 3;

	printf("----------------\n");
	printf("%d\n", a);
	printf("%d\n", *pa);
	printf("%d\n", **ppa);
	printf("----------------\n");

	printf("----------------\n");
	printf("%p\n", &a);
	printf("%p\n", pa);
	printf("%p\n", *ppa);
	printf("----------------\n");

	printf("----------------\n");
	printf("%p\n", &pa);
	printf("%p\n", ppa);
	printf("----------------\n");

}

/*
* 배열 이름의 주소값
* 배열은 C언어에서 sizeof, &연산자를 사용 할 떄 빼고 전부다 포인터로 암묵적으로 변환이 이뤄진다했습니다.
* 그렇다면 주소값 연사자를 사용하는 방법을 배워보자
*/

void ArrayPointrerExample()
{
	int arr[3] = { 1,2,3 };
	int* parrR = &arr;
	int(*parr)[3] = &arr;
	/*&arr은 무슨 의미일까? 
	* arr이 크기가 3인 배열이기 때문에 &arr을 보관할 포인터의 크기는 크기가 3인 배열을 가리키는 포인터가 되어야한다.
	* (*parr)[3] -> 꼭 ()로 감싸야한다. ()를 빼버리면 int *parr[3]으로 주소값 3개를 갖는 포인터 배열로 인식한다.
	parr과 arr은 같은 값을 가집니다.
	(*parr)에 arr주소를 넣었기 때문에 모두 배열의 첫 번째 원소의 주소값을 출력한다.
	int(*parr)[3]은 3크기의 int 배열을 가르킨다는 뜻
	*
	* C언어는 B 언어에서 파생된 언어입니다 B언어에서는 실제 배열이 있고 배열을 가리키는 포인터가 따로 있었습니다.
	* 즉 arr과 arr[0]은 각각 다른 메모리를 차지했습니다 C언어에서는 arr은 실제 메모리에 있지 않고 arr[0]의 주소입니다
	* 때문에 B언어에서는 arr과 arr[0]은 다른 값을 출력했었고 데니스 리치는 B문법을 계승하되 이와 찾이 포인터 공간을
	* 낭비하지 않으려 했습니다. 그래서 조금 이상하지만 메모리 공간을 효율적으로 쓰게 되는 배열-포인터 관계가 탄생했습니다.
	*/ 

	printf("%d\n", arr[1]);
	printf("%d\n", (*parr)[1]);
	printf("%d\n", *parrR+1);
}

/*
* 2차원 배열의 [] 연산자
*/