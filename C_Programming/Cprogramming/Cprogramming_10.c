/*함수 2
* 함수 매개변수에 인자를 넘기면 
* 함수내에서 같은 값으로 다른 변수가 복사 되어 메모리에 존재하게 되는것이기 때문에
* 다른곳에서 호출해도 값이 바뀌지 않는다.
* 하지만 포인터를 매개변수로 전달하면 값이 바뀐다.
* 
*/

#include <stdio.h>

int change_vlae(int* p)
{
	*p = 4;
	return  0;
}
void BubbleSort();
void SwapArray(int* parr, int size);
void Add2DArrat(int(*parr)[10], int size);
/*배열을 인자로 받기
* int arr[3]와 같은 일차원 배열을 가리키는 포인터는 int* 형입니다.
* 1차 배열의 경우 int* parr의 매개변수로 넘길 수 있습니다.
*/
int add_number(int* parr)
{
	for (int i = 0; i < 3; i++) {
		parr[i]++;
	}
}

int main()
{
	//int i = 0;
	//printf("%d\n", i);
	//change_vlae(&i);
	///*i의 주소를 매개변수로 보내어
	//* change_vlae에서 해당 주소의 값에 접근하여 4로 할당하면 원본의 값이 바뀌기 때문에
	//* 다시 호출하면 바뀐 4의 값이 찍힙니다.
	//*/
	//printf("%d", i);
	//
	//int arr[3];
	//
	//for (int i = 0; i < 3; i++) {
	//	scanf_s("%d", &arr[i]);
	//}
	//
	//add_number(arr);

	//BubbleSort();

	int arr[2][10] = { {1,1,1,1,1,1,1,1,1,1},
	{2,2,2,2,2,2,2,2,2,2} };

	Add2DArrat(arr, 2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 10; j++)
			printf("%d", arr[i][j]);

		printf("\n");
	}

	return 0;
}

/*
* 문제 1
위 10 개의 원소들 중 최대값 구하는 함수를 이용하여, 
10 개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수를 만들어보세요. (난이도 : 中)
*/

void BubbleSort()
{
	int arr[10];

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("Input Number :");
		scanf_s("%d", &arr[i]);
	}

	SwapArray(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d\n", arr[i]);
	}
}

/*
* C언어에서는 배열을 포인터로 전달하여 배열의 크기를 알 수 없기 때문에 배열의 크기도 같이 보내주는게 일반적이다
*/
void SwapArray(int *parr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			int tmep = parr[j];
			if (tmep < parr[j+1])
			{
				parr[j] = parr[j + 1];
				parr[j + 1] = tmep;
			}
		}
	}

}

/*
* 문제 2
2 차원 배열의 각 원소에 1 을 더하는 함수의 인자는 어떤 모양일까요? 
(난이도 : 中下 2 차원 배열의 각 원소에 1 을 더하는 함수의 인자는 어떤 모양일까요? (난이도 : 中下)
*/

void Add2DArrat(int (*parr)[10], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <sizeof(*parr)/sizeof(int); j++)
		{
			parr[i][j]++;
		}
	}
}